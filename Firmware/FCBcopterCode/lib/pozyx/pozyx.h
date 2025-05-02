/*
This library is used to interface (pozyx+Arduino) to stm FCB board through serial UART
Communication.
steps:
1) Connect pozyx with arduino and intefrace
2) Convert the desired data into integers. in this case. xyz is in millimeter in INT32 format
    and xyz_velocity are in mm/s in Int32 format
3) Then transmit the int32_t format integar data using seril port on  Arduino
    Like print(startByte,x,'\n',y,'\n',z,'\n',vx,'\n',vy,'\n',vz,endByte).
    if x is 123 it will be transmitted as '1','2','3' in ascii code of 49,50,51 respectively
4) Here comes STM receiver part which is done by this code.

SPECIAL DEPENDANCIES:
1)BufferedSerial library by sam grove
2)serialCommunication library in FCB 2.0

*/
#pragma once

// #define POZYX_TX  PC_6
// #define POZYX_RX  PC_7
#define POZYX_TX  PA_9
#define POZYX_RX  PA_10

#include "serialCommunication.h"

class pozyx_arduino_interface
{
public:
  float xyz[3] = {0}, v_xyz[3]= {0}; //metre and m/s
  const float lb_xyz = -8; //m
  const float lb_v_xyz = -5;
  const float ub_xyz = 8; //m
  const float ub_v_xyz = 5; //m/s

  const int NoOfIntegars = 6;
  serial_comm_interface comm;//(PC_6, PC_7, NoOfIntegars);
  pozyx_arduino_interface();
  int update();
  int convert_str_to_flt();

};
pozyx_arduino_interface::pozyx_arduino_interface()
:comm(POZYX_TX, POZYX_RX, NoOfIntegars)
{}

int pozyx_arduino_interface::update()
{
  int index_flag = comm.readSerial(); //get new string into comm.temp
  if( index_flag>0 ) {
                      convert_str_to_flt(); //check for new string
                      return 1;
                    }
  else return -1;

}

int pozyx_arduino_interface::convert_str_to_flt()
{
  int32_t ints_0, ints_1, ints_2, ints_3, ints_4, ints_5;
  //sscanf(comm.tempString, "%d\n%d\n%d\n%d\n%d\n%d\n", &ints[0], &ints[1] , &ints[2] , &ints[3], &ints[4] , &ints[5] );
  sscanf(comm.tempString, "%d\n%d\n%d\n%d\n%d\n%d\n", &ints_0,\
          &ints_1 , &ints_2 , &ints_3, &ints_4 , &ints_5 );
  float data_flt[NoOfIntegars];

data_flt[0] = (float) ints_0/1000.0;
data_flt[1] = (float) ints_1/1000.0;
data_flt[2] = (float) ints_2/1000.0;
data_flt[3] = (float) ints_3/1000.0;
data_flt[4] = (float) ints_4/1000.0;
data_flt[5] = (float) ints_5/1000.0;
bool flag = 0;
  for(int i = 0; i<3; i++)
  {
        if(data_flt[i]>=lb_xyz && data_flt[i]<=ub_xyz)
        {xyz[i] = data_flt[i]; }
        else flag = -1;
  }
  for(int i = 3; i<6; i++)
  {
    if(data_flt[i]>=lb_v_xyz && data_flt[i]<=ub_v_xyz)
        {v_xyz[i-3] = data_flt[i]; }
    else flag = -1;
  }

return flag;
}
