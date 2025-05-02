#include "PID_SIMPLE.h"

//Current PID calc should only run at 100Hz . Since derivative is calculated using a filter
  //that is designed for this specific frequency
float pid::PIDcalc(  float state,float setPoint, float deltaTime_ms, bool pauseIntegral = false )
{
//ERROR CHECKING
  if(deltaTime_ms <MIN_PID_CYCLE_TIME_MS || deltaTime_ms>MAX_PID_CYCLE_TIME_MS )
      errorStatus[TIME_ERROR_STATUS] = true;
    else errorStatus[TIME_ERROR_STATUS] = false;
  if(state == oldState) errorStatus[STATE_ERROR_STATUS] = true; //SENSOR READING NOT UPDATED.Derivative can cup
    else errorStatus[STATE_ERROR_STATUS] = false;

//CONTRAINING THE TIME
  float deltaTime ;
  if(deltaTime_ms<=MIN_PID_CYCLE_TIME_MS)
      deltaTime = (MIN_PID_CYCLE_TIME_MS)*0.001;
  else if(deltaTime_ms>=MAX_PID_CYCLE_TIME_MS)
      deltaTime = (MAX_PID_CYCLE_TIME_MS)*0.001;
  else deltaTime = deltaTime_ms*0.001;

//ERROR CALCULATIONS FOR PID
  /*
    Derivative should be taken when states are not changed(No new imu data). In that case,
    suddenly Derivative drops to zero(Kind of noise!!)
    Also note that derivative is not taken for error. This improves setPoint change tracking
    characteristics - setpoint weighing }
    Basic first order filter is applied for the derivative. Completely in occordance with simulink 2DOF PID block(uses the same convention)
    */
  float error_D = setWeight_c * setPoint - state;
  float filteredDerivative = N_simulink * (error_D - oldError_D) + (1 - N_simulink * deltaTime ) * oldFilteredDerivative;

  float error_I = setPoint - state; //only used for integral
  if(pauseIntegral == false){  errorIntegral += error_I*deltaTime; }

//PID ACTION:
  /*
  Integral action should not happen unless the quadcopter goes into controllable state like
  Throttle above some threshold. Otherwise, Integral will keep gaining error when armed and mess up later
  INTEGRAL CLAMPING: done to prevent excesss integral error accumulation
  Total pid output is also limited. To avoid the interference of one malfunctioning axis from cupping the whole quadcopter control
  */
  float integralCorrection = ki*errorIntegral;
  limiter(&integralCorrection,-integral_claming_lmt,integral_claming_lmt);
  float output = kp*(setPoint*setWeight_b - state) + kd*(filteredDerivative) + integralCorrection;
  limiter(&output, PID_lowerLimit, PID_upperLimit);
  // float eta = 2.0*0.0397/0.01; //second order filter disabled
  // temp_inp[2] = temp_inp[1];
  // temp_inp[1] = temp_inp[0];
  // temp_inp[0] = output;
  // output = (temp_inp[0] + 2*temp_inp[1] + temp_inp[2] - (1-eta)*(1-eta)*temp_outp[1] - (1-eta*eta)*2*temp_outp[0])/(1+eta)/(1+eta);
  // temp_outp[1] = temp_outp[0];
  // temp_outp[0] = output;

//SAVE PREVIOUS STATES
oldState = state ;
oldError_D = error_D;
oldFilteredDerivative = filteredDerivative;
  return output; //successful
}

//Note that the following function has default arguments given in its prototype
pid::pid(float x1,float x2,float x3, float Ts, float b_Simulink, float c_Simulink, float N):
    kp(x1), kd(x2), ki(x3), pidTiming(Ts), setWeight_b(b_Simulink) , setWeight_c(c_Simulink), N_simulink(N)
{
  ;
}

void pid::limiter(float *x, float lb, float ub)
{
  if(*x>ub) *x=ub;
  else if(*x<lb) *x=lb;
  return;
}
