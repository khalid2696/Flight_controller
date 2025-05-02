#include "lidarLiteV3.h"

void lidar_class::initialize()
{
  tim.start();
  trigger.output();
  trigger =  0;
  monitor.rise(this,&lidar_class::rise_ISR);
  monitor.fall(this,&lidar_class::fall_ISR);

}

void lidar_class::rise_ISR()
{
  tim.reset();
}
void lidar_class::fall_ISR()
{
  pulse_us = tim.read_us();
}

lidar_class::lidar_class() : trigger(TRIGGER_PIN), monitor(MONITOR_PIN) 
{ ;}
