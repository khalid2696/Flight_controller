#pragma once

#include "mbed.h"
extern "C" {
#include "inv_mpu.h"
}
class MPU95250_IMU{
private:
  bool firstTime    = true; //flag for time correcting (only first time)
public:
  short gyr_raw[3]={0};
  short acc_raw[3] = {0};
  float gyro_dps[3] = {0.0};
  float acc_g[3] = {0};
  unsigned short gyr_fsr = 1;
  unsigned char acc_fsr = 1;
    float acc_g_filt[3]    = {0,0,0}; //filtered
  float pitch, roll; // in IMU coordinates. Pitch along y and roll along x. direction not verified
  float pitchAcc=0.0, rollAcc=0.0;
  float onlyGyroPitch = 0.0, onlyGyroRoll=0.0;//dont use this number for anything. IT will drift off
  // float accOffsets[3] = {0.117540273764259, 0.145749182509506, -0.179745102661597}; // for board 1
  // float gyroOffsets[3] = {-1.90601433460076, 1.49547753612167, -1.02019224714829}; //subtract offsets from your reading
  // float accOffsets[3] = {0,0,0}; // for board 1
  // float gyroOffsets[3] = {0,0,0}; //subtract offsets from your reading
  float gyroOffsets[3] = {-1.91424474175038 , 1.6335002553802 , -1.04574167575322 }; // for board 1
  float accOffsets[3] = {0.163261763271162,	0.136268989956958,	-0.181997922525107}; //subtract offsets from your reading
  float onlineGyroCalibOffsets[3] = {0.0};
  float onlineAccCalibOffsets[3] = {0.0};

  Timer compFilterTimer;
  long oldTime_us = 0;

  int initialize();
  int updateRollPitch();
  int complementaryFilter();
};

int MPU95250_IMU::initialize()
{
  struct int_param_s mpu_param_platform;
  if(mpu_init(&mpu_param_platform)!=0) while(1); //PUT SOMETHING ELSE here
  wait(0.2);
  mpu_set_sensors(INV_XYZ_GYRO | INV_XYZ_ACCEL | INV_XYZ_COMPASS);
  wait(0.2);
  mpu_get_gyro_fsr(&gyr_fsr);
  mpu_get_accel_fsr(&acc_fsr);
  wait(0.1);
  //Online calibration____________________________________________________________
    wait(0.1);

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

    for(int l = 0 ; l<3; l++)
      { onlineGyroCalibOffsets[l]  = onlineGyroCalibOffsets[l]/(float)noOfSamples;
        onlineAccCalibOffsets[l]   = onlineAccCalibOffsets[l]/(float)noOfSamples;  }

      onlineAccCalibOffsets[3-1] = onlineAccCalibOffsets[3-1]-1.0; //Az behaves differently!!

  compFilterTimer.start();
}

int MPU95250_IMU::updateRollPitch()
{
  unsigned long timeStamp=0;
  mpu_get_gyro_reg(gyr_raw, &timeStamp); //each measurement has 16bit resolution
  mpu_get_accel_reg(acc_raw, &timeStamp);
  for(int i = 0 ; i<3; i++)
        gyro_dps[i]= gyr_raw[i]*2000.0/32768.0f - gyroOffsets[i]-onlineGyroCalibOffsets[i];
  for(int i = 0 ; i<3; i++)
        acc_g[i]= acc_raw[i]*2.0/32768.0f - accOffsets[i]- onlineAccCalibOffsets[i];
  complementaryFilter();
}

// int MPU95250_IMU::complementaryFilter()
// {
// //  Reference : http://www.pieter-jan.com/node/11
//   long dt_us  = compFilterTimer.read_us()-oldTime_us;
//   oldTime_us = compFilterTimer.read_us();
//   float pitchGyr =pitch + gyro_dps[1]*(float)dt_us/1000000.0f;
//   float rollGyr  =roll  + gyro_dps[0]*((float)dt_us)/1000000.0f;
//   float pitchAcc = -atan2f( (float)acc_g[0],(float)acc_g[2] )*180.0/3.14159;
//   float rollAcc = atan2f( (float)acc_g[1],(float)acc_g[2] )*180.0/3.14159;
//   pitch = 0.96*pitchGyr+ 0.04*pitchAcc;
//   roll = 0.96*rollGyr + 0.04*rollAcc; //done
//   return 0;
// }
int MPU95250_IMU::complementaryFilter()
{
  //  Reference : http://www.pieter-jan.com/node/11
  //improved from this reference https://dsp.stackexchange.com/questions/25220/what-is-the-definition-of-a-complementary-filter
  // But those tutoriasl forgot one very important aspect. Please filter that damm accelerometer before doing SOMETHING. Escpecially for RC Quadcopter case
  // if u messed with this filter and changed it back after realising ur mistake please increase this counter
  // CUP COUNTER= 2
  long dt_us  = compFilterTimer.read_us()-oldTime_us;
  oldTime_us  = compFilterTimer.read_us();
  if(firstTime == true)   {  firstTime = false;
                             dt_us = 0;  }
 float cf_param          = 0.02;   // Ts/tau
  float pitchGyr_delta    = gyro_dps[1]*(float)dt_us/1000000.0f;
  float rollGyr_delta     = gyro_dps[0]*((float)dt_us)/1000000.0f;
   //for(int i=0; i<3; i++) {acc_g_filt[i] = acc_g_filt[i] * (1-cf_param) + acc_g[i] * cf_param;}
  for(int i=0;i<3;i++) acc_g_filt[i] = acc_g[i];// filter diabler
  //The direction for pitchAcc is different!!!!!
   if(acc_g_filt[2]<2 && acc_g_filt[2]>0.25){
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
