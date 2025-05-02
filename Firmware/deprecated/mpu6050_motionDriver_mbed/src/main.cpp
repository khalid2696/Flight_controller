//#define SELF_TEST
#include "mbed.h"
#include "SparkFunMPU9250-DMP.h"
#include "math.h"
Serial pc(USBTX,USBRX);
DigitalOut led(LED1);
MPU9250_DMP imu;
unsigned char whoami[1]={0};
unsigned char fifo_count[2]={32,32};
unsigned char temp[1]={32};
unsigned char outbuff[4];
unsigned char inbuff[4];
unsigned char regadd;
char registeradress[5];
unsigned char registerdata[]={33};
void printIMUData(void);
void normalise(float* quat0,float* quat1 ,float* quat2 ,float* quat3);


#ifndef SELF_TEST
    int main()
    {
      pc.baud(115200);
      pc.printf("Hello World\n");
      imu_init();
      stamper_init();
    #if 1//Regular program
      // Call imu.begin() to verify communication and initialize
      if (imu.begin() != INV_SUCCESS){
        while (1){
          pc.printf("Unable to communicate with MPU-9250");
          pc.printf("Check connections, and try again.\n");
          wait_ms(5000);
        }
      }
        pc.printf("imu.begin() suceeded\n");

        if(imu.dmpBegin(DMP_FEATURE_6X_LP_QUAT | // Enable 6-axis quat
                   DMP_FEATURE_GYRO_CAL, // Use gyro calibration
                  150)==INV_ERROR){ // Set DMP FIFO rate to 150 Hz
            pc.printf("imu.dmpBegin have failed\n");//dmpLoad function under it fails which is caused by memcmp(firmware+ii, cur, this_write) (it is located at row 2871 of inv_mpu.c)
                  }
        else{
            pc.printf("imu.dmpBegin() suceeded\n");
        }
        pc.printf("$GETEU,*\n");
    #endif
    #if 0//this scope is only for debugging purposes of mbed_i2c_read and write functions
        mbed_i2c_read(0x68,0x75,1,whoami);
        pc.printf("whoami=%d\n",whoami[0]);
        mbed_i2c_read(0x68,0x23,2,inbuff);
        pc.printf("Buffer=%d-%d\n",inbuff[0],inbuff[1]);
        outbuff[0]=inbuff[0]&0x01;
        outbuff[1]=inbuff[1]&0x02;
        pc.printf("updated buffer=%d-%d\n",outbuff[0],outbuff[1]);
        mbed_i2c_write(0x68,0x23,2,outbuff);
        mbed_i2c_read(0x68,0x23,2,inbuff);
        pc.printf("new out buffer=%d-%d(if zero, write function still needs to be fixed)\n",inbuff[0],inbuff[1]);
    #endif
    while(1){
        if(pc.readable()){
            pc.scanf("%s",&registeradress);
            regadd=(registeradress[0]-48)*100+(registeradress[1]-48)*10+(registeradress[2]-48);
            mbed_i2c_read(0x68,(unsigned)regadd,1,registerdata);
            pc.printf("%d is gotten from serial port, data at that register is %d\n",regadd,registerdata[0]);
        }
        /*if(imu.dmpBegin(DMP_FEATURE_6X_LP_QUAT | // Enable 6-axis quat
                   DMP_FEATURE_GYRO_CAL, // Use gyro calibration
                  20)==INV_ERROR){ // Set DMP FIFO rate to 20 Hz
            pc.printf("imu.dmpBegin have failed\n");//dmpLoad function under it fails which is caused by memcmp(firmware+ii, cur, this_write) (it is located at row 2871 of inv_mpu.c)
                  }
        else{
            pc.printf("imu.dmpBegin() suceeded\n");
        }*/
      // Check for new data in the FIFO
      if (imu.fifoAvailable()){//fifo is not being available
        led=0;
        wait_ms(1);
        led=1;
        wait_ms(1);
        // Use dmpUpdateFifo to update the ax, gx, mx, etc. values
        if ( imu.dmpUpdateFifo() == INV_SUCCESS){
          // computeEulerAngles can be used -- after updating the
          // quaternion values -- to estimate roll, pitch, and yaw
          imu.computeEulerAngles();
          printIMUData();
        }
      }
      else{
              led=0;
      }
    }
      return 0;
    }
#endif
#ifdef SELF_TEST
  int main(){
    pc.baud(115200);
    pc.printf("Hello World\n");
    imu_init();
    stamper_init();

    // Call imu.begin() to verify communication and initialize
    if (imu.begin() != INV_SUCCESS){
      while (1){
        pc.printf("Unable to communicate with MPU-9250");
        pc.printf("Check connections, and try again.\n");
        wait_ms(5000);
      }
    }
      pc.printf("imu.begin() suceeded\n");
  int abc= imu.selfTest();
  wait(10);
  pc.printf("self test results %d\n",abc);
  // its a bit mask 111 or 7 means gyro,acc,mag are all fine
  }
#endif




    void normalise(float* quat0,float* quat1 ,float* quat2 ,float* quat3)
    {
      float normy = sqrt( (*quat0)*(*quat0)+(*quat1)*(*quat1)+(*quat2)*(*quat2)+(*quat3)*(*quat3) );
      *quat0=(*quat0)/normy;
      *quat1=(*quat1)/normy;
      *quat2=(*quat2)/normy;
      *quat3=(*quat3)/normy;
      return;
    }
    void decompose_quat(float quat0, float quat1, float quat2, float quat3, float * quat_angle, float quat_axis[])
    {
      float normy = sqrt( (quat1)*(quat1)+(quat2)*(quat2)+(quat3)*(quat3) );
      quat_axis[0] = quat1/normy;
      quat_axis[1] = quat2/normy;
      quat_axis[2] = quat3/normy;
      *quat_angle = acos(quat0) * 180.0/3.14159265;//returns angle in [0,180];
      return;
    }
    void printIMUData(void)
    {
      // After calling dmpUpdateFifo() the ax, gx, mx, etc. values
      // are all updated.
      // Quaternion values are, by default, stored in Q30 long
      // format some kind of 2's complement format. calcQuat turns them into a float between -1 and 1
      float q0 = imu.calcQuat(imu.qw);
      float q1 = imu.calcQuat(imu.qx);
      float q2 = imu.calcQuat(imu.qy);
      float q3 = imu.calcQuat(imu.qz);

      //Quaternion is not normalised. I am gonna normalise- it
      normalise(&q0,&q1,&q2,&q3);
      float quat_angle, quat_axis[3];
      decompose_quat(q0,q1,q2,q3, &quat_angle, quat_axis);

      //pc.printf("$\t%.4lf \t %.4lf \t %.4lf \t*\n", imu.yaw,imu.pitch,imu.roll);
      //pc.printf("%f  %f  %f  %f ",q0,q1,q2,q3);
      //pc.printf("%f %f %f %f\n",quat_angle,quat_axis[0], quat_axis[1],quat_axis[2]);
      //pc.printf("%f\n",1.0/0.0 );
      float acc[3]={0.0,0.0,0.0};
      acc[0]= imu.calcAccel(imu.ax);
      acc[1]= imu.calcAccel(imu.ay);
      acc[2]= imu.calcAccel(imu.az);
      //pc.printf("%f %f %f\n",acc[0],acc[1],acc[2]);
      pc.printf("%d\n",imu.ax);
      //wait(0.1);

    }
