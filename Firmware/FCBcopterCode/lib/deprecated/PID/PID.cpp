#include "PID.h"

//Current PID calc should only run at 100Hz . Since derivative is calculated using a filter
  //that is designed for this specific frequency
float pid_legacy::PIDcalc(  float state,float setPoint, float deltaTime_ms, bool pauseIntegral = false )
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

  //Filter the state
  tempState=state = stateLP.filter(state ); //Now it is low passed
  //Error calculation
  float error = setPoint - state;
  float stateDerivative = 0.0;
  stateDerivative = derivativeCalc.filter(state);
  /* Ancient method of finding derivative
  {  if(state!=oldState) stateDerivative = (state - oldState)/deltaTime;
      //Derivative should be taken when states are not changed(No new imu data). In that case,
      //suddenly Derivative drops to zero(Kind of noise!!)
      //Also note that derivative is not taken for error. This improves setPoint change tracking
      //characteristics }
      */

  if(pauseIntegral == false){  errorIntegral += error*deltaTime; }
  //Integral action should not happen unless the quadcopter goes into controllable state like
  //Throttle above some threshold. Otherwise, Integral will keep gaining error when armed and mess up later
  limiter(&errorIntegral,-INTEGRAL_CLAMPING_LMT,INTEGRAL_CLAMPING_LMT);
  ////INTEGRAL CLAMPING: done to prevent excesss integral error accumulation
  float output = kp*error + kd*(-stateDerivative) + ki*errorIntegral;
  //pc.printf("%f\n",*output);
  limiter(&output, PID_lowerLimit, PID_upperLimit);
  //done to stop the net pid output from overshooting

  return output; //successful
}


pid_legacy::pid_legacy(float x1,float x2,float x3):
  kp(x1), kd(x2), ki(x3),
  derivativeCalc(PID_Nc, PID_filterCoefficients, PID_buffer),
  stateLP(F_cutOff, Fs)
{;}

void pid_legacy::limiter(float *x, float lb, float ub)
{
  if(*x>ub) *x=ub;
  else if(*x<lb) *x=lb;
  return;
}
