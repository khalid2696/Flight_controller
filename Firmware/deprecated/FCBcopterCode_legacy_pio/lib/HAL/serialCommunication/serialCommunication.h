//This is a general serial communication{higher level comm} library to send 32 bit integars
//and receiver them over serial ports. it is independant of the device
#pragma once

#include "mbed.h"
#include "BufferedSerial.h"
#include "vector"

class serial_comm_interface
{
  //This code should not  take more than 5ms in any case!!!
public:

  int NoOfIntegars; //To be received
  vector <int32_t> received_integars;

  char tempString[35] = {0}; //Note that the size should be higher than the
  // required 4*NoOfInt+NoOfInt
  //temporary string to hold the received string

  PinName tx_pin; //PC_6  = 0x26, but stored as integar
  PinName rx_pin; //Hex code for PC_7  = 0x27,// Pin Name is a datatype enum holding pin number

  char startByte = 0x05; //these should not occur in normal transmission
  char endByte = 0x11;
  //char separator = '\n'; done by default
  BufferedSerial device;
  //Functions
  serial_comm_interface(PinName, PinName, int); //constructor
  int readSerial();
  //int convert_to_int();
  //int verify();
};

serial_comm_interface::serial_comm_interface(PinName tx, PinName rx, int NoOfint):
   rx_pin(rx),
   tx_pin(tx),
   device(tx,rx),
   NoOfIntegars(NoOfint)
  {
    device.baud(115200); //setting default baud rate
  }


  int serial_comm_interface::readSerial()
  {
    int index = 0;
    //PC.printf("0 ");
     while(device.readable())
     {
      // PC.printf("1 ");
       if(device.getc() == startByte )
         {
           //PC.printf("2 ");
           //Clear the entire string. so as to be sure of rubbing old data
           memset( tempString , 0 , sizeof(tempString) );
           while(device.readable())
           {
             //PC.printf("3 ");
             char c = device.getc();
             if(c == endByte) {
                                      //clear the remaining buffer
                                      //PC.printf("4 \n");
                                      tempString[index+1] = '\n';//append an end byte
                                      while ( device.readable()){ device.getc(); }
                                      return index;
                                    }
             else { //PC.printf("5 ");
                    tempString[index] = c;
                  }

             index++;
           }
         }
     }
     return -1; //No reading
  }
  //Convert to int cannot be done as the code is too hardcoded at this stage
// int serial_comm_interface::convert_to_int()
//   {
//     ;
//   }
// int serial_comm_interface::verify()
//   {
//     ;
//   }
