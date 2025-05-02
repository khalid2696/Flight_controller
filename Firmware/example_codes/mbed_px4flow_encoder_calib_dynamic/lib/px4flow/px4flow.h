//This work is largely based on eshnou arduino-px4flow-i2c
/*  Guidelines to make library out of this work
    Sample at 0.020 seconds
    Read both the frames(normal and integral)
      if normal frames count is not changing DONOT COMPUTE ANYTHING AGAIN
      if QUALITTY == 0 THEN donot compute anything
      if frames_integral is 2 then you will have to take care of the integral time taken
      Donot use pattern that alias over itself
      At this point of time, it is not known whether internal update rate is 400Hz or 50Hz
      DONOT use sonar data, it abruptly goes to zero some times
      Some times the i2c gets blocked off. Reset px4flow or disconnect power
      Check the connection to px4flow when initialising
      It is not based on Master of px4flow respository.
      It is not based on the default shipped firmware for pxflow sensor
      It is based on https://github.com/vmanoj1996/Flow fork's STABLE branch

      This class calculates gyro compensated optical flow in rad/s.
      Further velocity estimation should be done externally
      */
#pragma once
#include "mbed.h"
#define ADDR_PX4FLOW 0x42
#define I2C3_SCL_PIN PA_8
#define I2C3_SDA_PIN PC_9

// const float focal_length_px = (16.0f/(4.0f * 6.0f) * 1000.0f); //pixels //original focal lenght: M12 lens pixelsize: 6um, binning 4 enabled
struct i2c_frame{
  uint16_t frame_count; //the absolute processed frame count
  int16_t pixel_flow_x_sum; //latest flow in pixels*10 and already gyro compensated. flow is the image flow direction
  int16_t pixel_flow_y_sum;
  int16_t flow_comp_m_x; //1000*x vel in meter/time step. Multipled by sonar already
  int16_t flow_comp_m_y; //
  int16_t quality;     //0-255. 255 for good patterns under reasonable lighting condition
  int16_t gyro_x_rate; //  (1/10 dps). Now i have no idea. Not mentioned in  site :(())
  int16_t gyro_y_rate;
  int16_t gyro_z_rate;
  uint8_t gyro_range; //why giving zero 0-7. zero means 50 dps range. Not sure
  uint8_t sonar_timestamp; //what is this time
  uint8_t ground_distance;
} ;

struct i2c_integral_frame {
	uint16_t frame_count_since_last_readout; /**< number of flow measurements since last I2C readout [#frames] */
	int16_t pixel_flow_x_integral;           /**< accumulated flow in pixel*10 around x axis since last I2C readout */ //not gyro compensated
	int16_t pixel_flow_y_integral;
	int16_t gyro_x_rate_integral;            /**< accumulated gyro x rates in radians*10000 since last I2C readout [rad*10000] */
	int16_t gyro_y_rate_integral;            /**< accumulated gyro y rates in radians*10000 since last I2C readout [rad*10000] */
	int16_t gyro_z_rate_integral;            /**< accumulated gyro z rates in radians*10000 since last I2C readout [rad*10000] */
	uint32_t integration_timespan;           /**< accumulation timespan in microseconds since last I2C readout [microseconds] */
	uint32_t sonar_timestamp;                /**< time since last sonar update [microseconds] */
	uint16_t ground_distance;                /**< Ground distance in meters*1000 [meters*1000] */
	int16_t gyro_temperature;                /**< Temperature * 100 in centi-degrees Celsius [degcelsius*100] */
	uint8_t qual;                            /**< averaged quality of accumulated flow values [0:bad quality;255: max quality] */
} ;

I2C i2c(I2C3_SDA_PIN, I2C3_SCL_PIN);

class px4flow
{
private:
  const char frame_register[1] = {0x00};
  const char frame_int_register[1] = {0x16};
public:
  char frame_temp[22];
  char frame_int_temp[26];
  float y_flow_unGyroCompensated=0, x_flow_unGyroCompensated=0;
  float y_flow_gyroCompensated  =0, x_flow_gyroCompensated  =0;
  i2c_frame frame;
  i2c_integral_frame frame2;

  void frame_update();
  void frame_integral_update();
  int update_flow(float, float );

};
int px4flow::update_flow(float gx_flow_frame, float gy_flow_frame)//angular velocity given in flow sensor frame
{
  i2c.write(ADDR_PX4FLOW<<1, frame_register, 1); // mbed uses 8 bit addressing. first 7 is the addresss and 8th bit signifies read or write  //8th bit 0 means read and 1 means write!!
  i2c.read(ADDR_PX4FLOW<<1 , frame_temp, 22, 0);
  frame_update();
  i2c.write(ADDR_PX4FLOW<<1, frame_int_register, 1);
  i2c.read(ADDR_PX4FLOW<<1 , frame_int_temp, 26, 0);// have to read 26 bytes instead of 25
  frame_integral_update();

   y_flow_unGyroCompensated = (float) frame2.pixel_flow_y_integral/10.0f/603.19/frame2.integration_timespan*1000000.0f;
   y_flow_gyroCompensated = y_flow_unGyroCompensated - gx_flow_frame;
   x_flow_unGyroCompensated = (float) frame2.pixel_flow_x_integral/10.0f/603.19/frame2.integration_timespan*1000000.0f;
   x_flow_gyroCompensated = x_flow_unGyroCompensated + gy_flow_frame;
   return 0;
}


void px4flow::frame_update()
{
  frame.frame_count           = ( (uint16_t) frame_temp[0]  )  +  ( (uint16_t) frame_temp[1]<<8 );
  frame.pixel_flow_x_sum      = ( (uint16_t) frame_temp[2]  )  +  ( (uint16_t) frame_temp[3]<<8 );
  frame.pixel_flow_y_sum      = ( (uint16_t) frame_temp[4]  )  +  ( (uint16_t) frame_temp[5]<<8 );
  frame.flow_comp_m_x         = ( (uint16_t) frame_temp[6]  )  +  ( (uint16_t) frame_temp[7]<<8 );
  frame.flow_comp_m_y         = ( (uint16_t) frame_temp[8]  )  +  ( (uint16_t) frame_temp[9]<<8 );
  frame.quality               = ( (uint16_t) frame_temp[10] )  +  ( (uint16_t) frame_temp[11]<<8 );// 255: maximum quality
  frame.gyro_x_rate           = ( (uint16_t) frame_temp[12] )  +  ( (uint16_t) frame_temp[13]<<8 );
  frame.gyro_y_rate           = ( (uint16_t) frame_temp[14] )  +  ( (uint16_t) frame_temp[15]<<8 );
  frame.gyro_z_rate           = ( (uint16_t) frame_temp[16] )  +  ( (uint16_t) frame_temp[17]<<8 );
  frame.gyro_range            = (uint8_t) frame_temp[18] ;
  frame.sonar_timestamp       = (uint8_t) frame_temp[19] ;
  frame.ground_distance       = ( (uint16_t) frame_temp[20] )  +  ( (uint16_t) frame_temp[21]<<8 );
  return;
}
void px4flow::frame_integral_update()
{
  frame2.frame_count_since_last_readout           = ( (uint16_t) frame_int_temp[0]  )  +  ( (uint16_t) frame_int_temp[1]<<8 );
  frame2.pixel_flow_x_integral            = ( (uint16_t) frame_int_temp[2]  )  +  ( (uint16_t) frame_int_temp[3]<<8 );
  frame2.pixel_flow_y_integral            = ( (uint16_t) frame_int_temp[4]  )  +  ( (uint16_t) frame_int_temp[5]<<8 );
  frame2.gyro_x_rate_integral             = ( (uint16_t) frame_int_temp[6]  )  +  ( (uint16_t) frame_int_temp[7]<<8 );
  frame2.gyro_y_rate_integral             = ( (uint16_t) frame_int_temp[8]  )  +  ( (uint16_t) frame_int_temp[9]<<8 );
  frame2.gyro_z_rate_integral             = ( (uint16_t) frame_int_temp[10] )  +  ( (uint16_t) frame_int_temp[11]<<8 );// 255: maximum quality
  frame2.integration_timespan             = ( (uint32_t) frame_int_temp[12] )  |  ( (uint32_t) frame_int_temp[13]<<8 ) |\
                                                  ( (uint32_t) frame_int_temp[14]<<16 ) | ( (uint32_t) frame_int_temp[15]<<24 );
  frame2.sonar_timestamp                  = ( (uint32_t) frame_int_temp[16] )  +  ( (uint32_t) frame_int_temp[17]<<8 ) |\
                                                  ( (uint32_t) frame_int_temp[18]<<16 ) | ( (uint32_t) frame_int_temp[19]<<24 );
  frame2.ground_distance                  = ( (uint16_t) frame_int_temp[20] )  +  ( (uint16_t) frame_int_temp[21]<<8 );
  frame2.gyro_temperature                 = (uint16_t) frame_int_temp[22] + (uint16_t) frame_int_temp[23];
  frame2.qual                             = (uint8_t) frame_int_temp[24] ;

  return;
}
