#ifndef DATA_LOGGING
#define DATA_LOGGING

#include "mbed.h"
#include "BufferedSerial.h"

//BufferedSerial tele( USBTX,USBRX ); // Serial2
//BufferedSerial tele( PA_2,PA_3 ); //serial 2 / USB
//BufferedSerial tele( PA_9,PA_10 ); //gps port conflict with IMU - UART - 1

//BufferedSerial tele(USBTX,USBRX);
BufferedSerial tele( PC_6,PC_7 ); //UART - 6 the one used currently for telemetry
#endif /* end of include guard:  */
