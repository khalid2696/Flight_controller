#pragma once
#include "lidarLiteV3.h"
#include "imu_mpu9250_comp_filter.h"

#define ALT_CF_TIMING 0.005

class altitudeComplementaryFilter
{
public:
  float height_meas = 0.0; //unit is meter
  float acc_meas = 0.0; //unit is m/s^2

  float alpha;
  float alphaCF;
  float vel_lidar = 0;
  float velocityEstimate = 0.0;
  float lidar_smoothed = 0;

  lidar_class lidar;
  int init();
  int update(float acc);
  int complementaryFilter();
}alti;

int altitudeComplementaryFilter::init()
{
  alpha = ALT_CF_TIMING*2.0*3.14159*5.0;
  alphaCF = ALT_CF_TIMING*2.0*3.14159*1.0;
  lidar.initialize();
  wait(0.1);
  return 0;
}
int altitudeComplementaryFilter::update(float acc)
{
  height_meas = lidar.pulse_us*0.001;// m
  acc_meas = acc;
  complementaryFilter();
  return 0;
}
int altitudeComplementaryFilter::complementaryFilter()
{
//This code is tested and works out good. Incase u changed it and reverted back the change later because of ur stupid changes.
                          // Please increment the following blunder counter
                          // BLUNDER COUNTER = 0
//Get velocity estimate from lidar data after smoothing it
float old_lidar_smoothed = lidar_smoothed;
lidar_smoothed = (1-alpha)*lidar_smoothed + alpha*height_meas;
vel_lidar = (lidar_smoothed-old_lidar_smoothed)/ALT_CF_TIMING;

//Apply Complementary filter(CF) on both velocities
velocityEstimate = (1-alphaCF)*velocityEstimate + acc_meas*ALT_CF_TIMING + alphaCF*vel_lidar;

return 0;
}
