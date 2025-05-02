#include "mbed.h"

#define OPR_MODE    (0x3D) // operation mode Register
#define BNOADDR     (0x29<<1) // imu address
#define SDA         PC_9 //PB_9
#define SCL         PA_8 //PB_8
#define EUL_DATA_X_LSB 0x1A
#define QUA_DATA_W_LSB 0x20
#define PI          3.14159
#define CALIB_STAT 0x35
I2C i2c(SDA, SCL);

DigitalOut led(LED1);
DigitalOut rst(PB_3);
Serial pc(SERIAL_TX, SERIAL_RX);
    int16_t quat[4];
    double yaw,pitch,roll;
    void computeEulerAngles( bool degrees);
    double dqw=1, dqx=0, dqy=0, dqz=0;
int status;
bool sys_stat[8],gyr_cal[2],acc_cal[2], mag_cal[2];




int main()
{
    pc.baud(115200);
    i2c.frequency(400000);
    char data_write[2];
    char data_read[6];

    led = 0;
    // while (1) {
    wait(1);
    rst = 0;
    led =1;
    wait(0.2);
    led = 0;
    rst = 1;
    wait(0.5);
    led =1;
      data_write[0] = OPR_MODE;
      data_write[1] = 0x0C;//fusion mode //0x07; //0111// binary extension/ prefix is not supported by mbed :facepalm

      status = i2c.write(BNOADDR, data_write, 2, false);

       wait(1);
    // }

  while(1){

        led != led;
       data_write[0] = QUA_DATA_W_LSB; //LSB first

       int stat1 = i2c.write(BNOADDR, data_write, 1, true); // no stop
       int stat2 = i2c.read(BNOADDR, data_read, 6, false); //repeated = false

       // pc.printf("\nstat %d %d %d ",status, stat1, stat2);
       for(int i=0; i<4; i++){
         quat[i] = ( data_read[2*i+1]<<8 | data_read[2*i] ); //ypr form
        }
        data_write[0] = CALIB_STAT;
        i2c.write(BNOADDR, data_write, 1, true);
        i2c.read(BNOADDR, data_read, 1, false);
        sys_stat[7] = data_read[0]>>7 & 0x01;
        sys_stat[6] = data_read[0]>>6 & 0x01;
        sys_stat[5] = data_read[0]>>5 & 0x01;
        sys_stat[4] = data_read[0]>>4 & 0x01;
        sys_stat[3] = data_read[0]>>3 & 0x01;
        sys_stat[2] = data_read[0]>>2 & 0x01;
        sys_stat[1] = data_read[0]>>1 & 0x01;
        sys_stat[0] = data_read[0] & 0x01;

        dqw = ((double)quat[0])*0.00012207;
        dqx = ((double)quat[1])*0.00012207f;
        dqy = ((double)quat[2])*0.00012207f;
        dqz = ((double)quat[3])*0.00012207f;
        // led = !led;
        computeEulerAngles(1);
        pc.printf("\n%f %f %f ",yaw,pitch,roll);
        for(int i=7;i>=0;i--)
        {
          pc.printf("%d ",sys_stat[i]);
        }
        wait(0.01);
        }
    }
    void computeEulerAngles( bool degrees)
   {
   	/*This code is taken from a wikipedia quaternion to euler angle computation article(y-p-r) or 3-2-1 or z-y-x
   	or Aerospace regular euler angles or Tail Bryan Angles

   	*/
   	// roll (x-axis rotation)
    double norm = sqrt(dqw*dqw + dqx*dqx + dqy*dqy + dqz*dqz);
    dqw = dqw/norm;
    dqx = dqx/norm;
    dqy = dqy/norm;
    dqz = dqz/norm;
   	double sinr = +2.0 * (dqw * dqx + dqy * dqz);
   	double cosr = +1.0 - 2.0 * (dqx * dqx + dqy * dqy);
   	roll = atan2(sinr, cosr);

   	// pitch (y-axis rotation)
   	double sinp = +2.0 * (dqw * dqy - dqz * dqx);
   	if (fabs(sinp) >= 1)
   		pitch = copysign(M_PI / 2, sinp); // use 90 degrees if out of range
   	else
   		pitch = asin(sinp);

   	// yaw (z-axis rotation)
   	double siny = +2.0 * (dqw * dqz + dqx * dqy);
   	double cosy = +1.0 - 2.0 * (dqy * dqy + dqz * dqz);
   	yaw = atan2(siny, cosy);
   	if (degrees)
   	{
   		yaw *= (180.0 / PI);
   		pitch *= (180.0 / PI);
   		roll *= (180.0 / PI);
   	}

   }
