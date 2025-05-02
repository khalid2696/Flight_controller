//____________________________________________________________________________
#pragma once
#include <mbed.h>
#include "Pin_Declarations.h"

#define TRIGGER_PIN SPI2_MOSI
#define MONITOR_PIN SPI2_NSS

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
