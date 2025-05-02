/* PID library for FCB 2.0
  written by Manoj Feb 2018
  Features needed/added:
  *Integral Windup - 2 schmes are used. 1- pause integral in uncontrollable zone, 2- limiting the integral value
  *Derivative filter (first order LOW PASS added)
  *Adding saturation/cap/Limit the outputs. The output of PID is clamped
  *Setpoint weighiung feature is added : b and c(simulink convention in pid2dof ).
	Setpoint weighing may/maynot produce disired characteristics--not used now


  Please note that the default limits given right below are only for attitude control.
  Alt control pids use a different value
	It must be reinitialzed to different value
  */
#pragma once

//#include "filter.h"
//#include "dataLogging.h"
#define MAX_DEFAULT_PID_LMT 1 //Nm
#define MIN_PID_CYCLE_TIME_MS 5
#define MAX_PID_CYCLE_TIME_MS 150
#define INTEGRAL_CLAMPING_LMT 0.5 //(+ or -) default value
// #define SAMPLING_FREQ 100

/*Here cycle time is the time between two consecutive pid calls. TOO SLOW AND TOO FAST
 execution both signify problems in the scheduler of code
 */
#define TIME_ERROR_STATUS 0 //index of the status array
#define STATE_ERROR_STATUS 1
#define SATURATION_ERR_STATUS 2

class pid
{
private:
  //float filter_a;
  //float filter_b;
  float oldTime_ms =0;
  float oldState =0.0;
  float oldFilteredDerivative = 0.0;
  float oldError_D = 0.0;
  float temp_inp[3] = {0.0};
  float temp_outp[2] = {0.0};
  float temp_r_in[2] = {0.0};
  float temp_r_out = 0.0;
public:
  float kp = 0, kd = 0, ki = 0;
  float setWeight_b, setWeight_c;
  float PID_lowerLimit = -MAX_DEFAULT_PID_LMT;
  float PID_upperLimit = MAX_DEFAULT_PID_LMT;
  float integral_claming_lmt = INTEGRAL_CLAMPING_LMT;
  float pidTiming; // time between successive pid calculations
  float N_simulink; // N = 1/tau for low pass filter for derivative. tau = 1/(2*pi*Fcutoff)

  bool errorStatus[3] = {false};
  float output = 0;
      float integralCorrection = 0; //allowed in c++11 standard
//Functions:
  float PIDcalc(float state, float setPoint, float deltaTime_ms, bool pauseIntegral );
  void errorChecker();
  void limiter(float *x, float lb, float ub);
  pid(float,float ,float, float, float = 1.0, float = 1.0, float  = 60);//P D I gains and pidTiming, derivativeCutOff and setpoint weight_b and c

//USELESS VARIABLES only for debugging
  float tempState = 0;
};
