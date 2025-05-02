/* PID library for FCB 2.0
  written by Manoj Feb 2018
  Features needed/added:
  *Integral Windup - Limiting integral maximum, Antiwindup, stop adding
  *Derivative filter (LOW PASS)
  *Derivative action on state and not on error
  *Adding saturation/cap/Limit the outputs
THis one doesnot work as desired due to some bug and not used. Please use pid_simple instead
  */
#pragma once

#include "filter.h"
//#include "dataLogging.h"
#define MAX_DEFAULT_PID_LMT 0.5
#define MIN_PID_CYCLE_TIME_MS 4
#define MAX_PID_CYCLE_TIME_MS 30
#define INTEGRAL_CLAMPING_LMT 0.3 //(+ or -)
#define SAMPLING_FREQ 100
#define CUTOFF_FREQ 20
/*Here cycle time is the time between two consecutive pid calls. TOO SLOW AND TOO FAST
 execution both signify problems in the scheduler of code
 */
#define TIME_ERROR_STATUS 0 //index of the status array
#define STATE_ERROR_STATUS 1
#define SATURATION_ERR_STATUS 2

#define PID_Nc 21

class pid_legacy
{
public:
  float kp = 0, kd = 0, ki = 0;
  float PID_lowerLimit = -MAX_DEFAULT_PID_LMT;
  float PID_upperLimit = MAX_DEFAULT_PID_LMT;
  float oldTime_ms =0;
  float oldState = 0;
  float errorIntegral = 0; //allowed in c++11 standard
  bool errorStatus[3] = {false};
  float output = 0;
//Functions:
  float PIDcalc(float state, float setPoint, float deltaTime_ms, bool pauseIntegral );
  void errorChecker();
  void limiter(float *x, float lb, float ub);
  pid_legacy(float,float ,float);//P D I gains

//Derivative Filter
  float PID_filterCoefficients[PID_Nc] = {-0.0903,1.8434,-2.8054,-1.6687,5.0516,2.6807,-10.0757,-5.2319,23.7134,33.6844,0.0000,-33.6844,-23.7134,5.2319,10.0757,-2.6807,-5.0516,1.6687,2.8054,-1.8434,0.0903};
  float PID_buffer[PID_Nc] = {0.0};
  FIRfilter derivativeCalc;
  /*
    Order: 20
    Type: FIR Derivative(designed on matlab)
    Sampling freq= 0.01 secs
    F=[0 20 30 50] (pass Freq = 20 Hz, stop Freq = 30, Nyquist =50Hz)
   */
//state first order filter
  float Fs = 100.0;//SAMPLING_FREQ; //Redundancy alert
  float F_cutOff = CUTOFF_FREQ; //20.0!=20 please
   firstOrderLP stateLP;

//USELESS VARIABLES only for debugging
  float tempState = 0;
};
