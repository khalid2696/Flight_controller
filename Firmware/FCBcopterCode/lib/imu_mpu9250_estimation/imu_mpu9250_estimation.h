#pragma once
/* Code for FCB 2.0, Rotorcraft Lab.
Please note that this work is strictly confidential.
Copying is not allowed without approval from Prof. Ranjith Mohan or from Manoj Velmurugan
vmanoj1996@gmail.com

Please note that all these calculations(only on imu class) are based on IMU frame of reference and not Aerospace NED convention.
This contains an implementation of kalman filter and complementary filter

*/

#include "mbed.h"
#include "LED.h" //for leds

extern "C" {
#include "inv_mpu.h"
}
#include "kalman.h"

// DigitalOut _debug_3(ESC_8_PIN);
class MPU95250_IMU{
private:
  bool firstTime    = true; //flag for time correcting (only first time)
public:
  short gyr_raw[3]  = {0,0,0}; //raw in int 16
  short acc_raw[3]  = {0,0,0}; //raw in int16
  float gyro_dps[3] = {0.0,0,0}; //unfiltered
  float acc_g[3]    = {0,0,0}; //unfiltered
  float acc_g_filt[3]    = {0,0,0}; //filtered
  //float gyro_filt[3]     = {0,0,0}; //filtered with low pass
  unsigned short gyr_fsr = 1;
  unsigned char acc_fsr  = 1;
  float pitch = 0.0, roll = 0.0; // in IMU coordinates. Pitch along y and roll along x. direction not verified
  float pitchAcc=0.0, rollAcc=0.0;
  float onlyGyroPitch = 0.0, onlyGyroRoll=0.0;//dont use this number for anything. IT will drift off
  float gyroOffsets[3]  = {-1.86987,	1.5540,	-1.015578}; // for board 1
  float accOffsets[3]   = {0.10289,	0.0854,	-0.20169}; //subtract offsets from your reading
  float onlineGyroCalibOffsets[3] = {0.0};
  float onlineAccCalibOffsets[3] = {0.0};

  Timer compFilterTimer;
  unsigned long oldTime_us = 0;

  int initialize();
  int update();
  int complementaryFilter();

  // KALMAN FILTER stuff
  mkf pitch_kalman, roll_kalman;

} imu;

int MPU95250_IMU::initialize()
{
  struct int_param_s mpu_param_platform;

  if(mpu_init(&mpu_param_platform)!=0) {
                            //while(1); //PUT SOMETHING ELSE here
                            return -10;}
  blue_led = 1;
  wait(0.2);
  blue_led = 0;
  mpu_set_sensors(INV_XYZ_GYRO | INV_XYZ_ACCEL ); //compass not used
  wait(0.2);
  blue_led = 1;
  mpu_set_lpf(42); // 20Hz LPF on some data(donno whether gyro/acc)
  mpu_get_gyro_fsr(&gyr_fsr);
  mpu_get_accel_fsr(&acc_fsr);

//Online calibration____________________________________________________________
  wait(0.1);
  blue_led = 0;
  green_led =1;
  //Acquire 50 samples of data
  int noOfSamples= 100;
  for(int i=1; i<=noOfSamples; i++)
    {
      mpu_get_gyro_reg(gyr_raw, NULL); //each measurement has 16bit resolution
      mpu_get_accel_reg(acc_raw, NULL);
      for(int j = 0 ; j<3; j++){
          onlineGyroCalibOffsets[j]+= gyr_raw[j]*0.061035156f - gyroOffsets[j];}// 2000.0/32768.0f
      for(int k = 0 ; k<3; k++){
          onlineAccCalibOffsets[k]+= acc_raw[k]*0.000061035   - accOffsets[k];} //2.0/32768.0f
      wait(0.05);
    }
    blue_led =1;
    green_led = 0;
  for(int l = 0 ; l<3; l++)
    { onlineGyroCalibOffsets[l]  = onlineGyroCalibOffsets[l]/(float)noOfSamples;
      onlineAccCalibOffsets[l]   = onlineAccCalibOffsets[l]/(float)noOfSamples;  }

    onlineAccCalibOffsets[3-1] = onlineAccCalibOffsets[3-1]-1.0; //Az behaves differently!!

  //____________________________________________________________________________
  wait(0.1);
  blue_led = 0;
  wait(0.5);
  blue_led = 0;
  compFilterTimer.start();

  return 0;
}

int MPU95250_IMU::update()
{
  // _debug_3 = 1;
  //unsigned long timeStamp=0;
  mpu_get_gyro_reg(gyr_raw, NULL); //each measurement has 16bit resolution
  mpu_get_accel_reg(acc_raw, NULL);
  for(int i = 0 ; i<3; i++)
        gyro_dps[i]= gyr_raw[i]*0.061035156f - gyroOffsets[i] - onlineGyroCalibOffsets[i];// 2000.0/32768.0f
  for(int i = 0 ; i<3; i++)
        acc_g[i]= acc_raw[i]*0.000061035     - accOffsets[i] - onlineAccCalibOffsets[i]; //2.0/32768.0f
  // _debug_3=0;
  complementaryFilter();
  pitch_kalman.run(gyro_dps[1]*3.14159/180.0, -atan2f( (float)acc_g[0],(float)acc_g[2] ) );
  roll_kalman.run(gyro_dps[0]*3.14159/180.0, atan2f( (float)acc_g[1],(float)acc_g[2] ) ); //input in SI units & IMU frame only
  return 0;
}

int MPU95250_IMU::complementaryFilter()
{
  //  Reference : http://www.pieter-jan.com/node/11
  //improved from this reference https://dsp.stackexchange.com/questions/25220/what-is-the-definition-of-a-complementary-filter
  // But those tutoriasl forgot one very important aspect. Please filter that damm accelerometer before doing SOMETHING. Escpecially for RC Quadcopter case
  // Filter not needed now. foam pad is used now
  //if u messed with this filter and changed it back after realising ur mistake please increase this counter
  // CUP COUNTER= 2
  long dt_us  = compFilterTimer.read_us()-oldTime_us;
  oldTime_us  = compFilterTimer.read_us();
  if(firstTime == true)   {  firstTime = false;
                             dt_us = 0;  }
 float cf_param           = 0.02;   
  float pitchGyr_delta    = gyro_dps[1]*(float)dt_us/1000000.0f;
  float rollGyr_delta     = gyro_dps[0]*((float)dt_us)/1000000.0f;
  // for(int i=0; i<3; i++) {acc_g_filt[i] = acc_g_filt[i] * (1-cf_param) + acc_g[i] * cf_param;}
  for(int i=0;i<3;i++) acc_g_filt[i] = acc_g[i];// filter disabled!!!!
  //The direction for pitchAcc is different!!!!!
  if(acc_g_filt[2]<2 && acc_g_filt[2]>0.25
     && acc_g_filt[0]<1 && acc_g_filt[0]>-1
     && acc_g_filt[1]<1 && acc_g_filt[1]>-1){
    //Az alone maynot ensure low noise in other axes!!
      pitchAcc          = -atan2f( (float)acc_g_filt[0],(float)acc_g_filt[2] )*57.295827909;// 180.0/3.14159
      rollAcc           = atan2f( (float)acc_g_filt[1],(float)acc_g_filt[2] )*57.295827909;// 180.0/3.14159
      pitch = (1-cf_param)*(pitch + pitchGyr_delta) + cf_param*pitchAcc;
      roll  = (1-cf_param)*(roll + rollGyr_delta) + cf_param*rollAcc; //done
    }
  else {
    pitch += pitchGyr_delta;
    roll  += rollGyr_delta; //neglect this samples acceleration data owing to high z acceleration
    }
  onlyGyroPitch += pitchGyr_delta;
  onlyGyroRoll  +=rollGyr_delta;
  return 0;
}
