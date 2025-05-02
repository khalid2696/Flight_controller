//____________________________________________________________________________
#pragma once


class lidar_class
{
public:
  DigitalInOut trigger;
  InterruptIn monitor;
  volatile long pulse_us=0;
  Timer tim;

  void initialize();
  void rise_ISR();
  void fall_ISR();
  lidar_class();
} ;
