#include "pid.h"



int pid::PIDcalc(volatile float *output, float state,float setPoint, float currentTime_ms)
{
  if(currentTime_ms-oldTime_ms>=MIN_PID_CYCLE_TIME_MS)
      float deltaTime = (currentTime_ms - oldTime_ms)*0.001;
  else float deltaTime = MIN_PID_CYCLE_TIME_MS*0.001;
  oldTime_ms = currentTime_ms;

  float error = setPoint - state;
  float stateDerivative = (state - oldState)/deltaTime;
  errorIntegral += error*deltaTime;

  *output = kp*error + kd*stateDerivative + ki*errorIntegral;
  limiter(output, PID_lowerLimit, PID_upperLimit);
  return 0; //successful
}


pid::pid(float x1,float x2,float x3): kp(x1), kd(x2), ki(x3)  {}
void pid::errorChecker()
{
  if(currentTime_ms-oldTime_ms <MIN_PID_CYCLE_TIME_MS || currentTime_ms-oldTime_ms>MAX_PID_CYCLE_TIME_MS )
      errorStatus[TIME_ERROR_STATUS] = true;
    else errorStatus[TIME_ERROR_STATUS] = false;
  if(state == oldState) errorStatus[STATE_ERROR_STATUS] = true; //SENSOR READING NOT UPDATED.Derivative can cup
    else errorStatus[STATE_ERROR_STATUS] = false;
}

void pid::limiter(float *x, float lb, float ub)
{
  if(*x>ub) *x=ub;
  else if(*x<lb) *x=lb;
  return;
}
