#pragma once
#include "mbed.h"
#include "HAL.h"
PwmOut blue_led(LED_BLUE_PIN);
PwmOut red_led(LED_RED_PIN);
PwmOut green_led(LED_GREEN_PIN);

int indicator_reset()
{
  for(int i=0;i<10;i++){
                       red_led = 0.1;
                       wait(0.1);
                       red_led = 0.0;
                       wait(0.1);
                       }
   return 0;
}
