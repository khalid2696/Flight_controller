//This file contains all the parameters required for fcb 2.0
//Please donot put any hardware constants like pin number in this file.
//It is meant for storing the gains, safety factors and so on in a central manner
#ifndef PARAMETERS
#define PARAMETERS


class gains_class
{
public:

//PDI order followed by setpoiint weights b and c  and then N_derivative_filter_simulink- simulink 2dof pid convention

   float rate_pitch[6] = {0.285458,    0.0148089,     1.09339544, 1.0 , 1.0 , 50};
  //float rate_pitch[6] = {0.147,    0.0235,    0.228, 1.0 , 1.0 , 25};
  float *rate_roll = rate_pitch;

  float rate_yaw[3]       = {0.25, 0.0, 0.25};
  // float rate_yaw[3]       = {0.00, 0.0, 0.0};
  float rx_sensitivity[3] = {40, 40, 120}; //channel 2,3,4 only in Pitch,Roll,Yaw order.// [a,b,c] (a means +-a/2 degree)
  //eg: Full signal corresponds to 20 deg pitch at 20 sensitivity
  //float angle_pitch = 1;
  float ang_pitch   = 5;
  float ang_roll    = ang_pitch;
  float HeightRateSensitivity = 4.0;
  float rate_height[6]        = {21.4,    1.2929,     60.455, 1.0 , 1.0 , 62};
  float rate_height_PIDoffset = 0.5;




  // float ang_yaw = 1.0; //not needed
  // gains_class();
  // int updateGains();

} gain;

// gains_class::gains_class()
//    {
// updateGains();
//    }
// int gains_class::updateGains()
// {
//   rate_pitch[0] = kp_rp_rate;
//   rate_pitch[1] = kd_rp_rate;//kp_rp_rate*kd_kp_rp_rate;
//   rate_pitch[2] = ki_rp_rate;//0.0;// kp_rp_rate*ki_kp_rp_rate;
//   rate_roll[0] = kp_rp_rate;
//   rate_roll[1] = kd_rp_rate;//kp_rp_rate*kd_kp_rp_rate;
//   rate_roll[2] = ki_rp_rate;//0.0;//kp_rp_rate*ki_kp_rp_rate;
//   return 0;
// }
#endif
