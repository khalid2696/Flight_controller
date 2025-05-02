/* PID library for FCB 2.0
  written by Manoj Feb 2018
  Features needed/added:
  *Integral Windup - Limiting integral maximum, Antiwindup, stop adding
  *Derivative filter (LOW PASS)
  *Derivative action on state and not on error
  *Adding saturation/cap/Limit the outputs

  */
#define MAX_DEFAULT_PID_LMT 0.5
#define MIN_PID_CYCLE_TIME_MS 5
#define MAX_PID_CYCLE_TIME_MS 30
#define TIME_ERROR_STATUS 0 //index of the status array
#define STATE_ERROR_STATUS 1


/*Here cycle time is the time between two consecutive pid calls. TOO SLOW AND TOO FAST
 execution both signify problems in the scheduler of code
 */


class pid
{
public:
  float kp = 0, kd = 0, ki = 0;
  float PID_lowerLimit = -MAX_DEFAULT_PID_LMT;
  float PID_upperLimit = MAX_DEFAULT_PID_LMT;
  float oldTime_ms =0;
  float oldState = 0;
  float errorIntegral = 0; //allowed in c++11 standard
  bool errorStatus[2] = {false};
  int PIDcalc(volatile float *,float ,float, float);
  pid(float,float ,float);

};

int pid::PIDcalc(volatile float *output, float state,float setPoint, float currentTime_ms)
{
  if(currentTime_ms-oldTime_ms <MIN_PID_CYCLE_TIME_MS || currentTime_ms-oldTime_ms>MAX_PID_CYCLE_TIME_MS )
      errorStatus[TIME_ERROR_STATUS] = true;
    else errorStatus[TIME_ERROR_STATUS] = false;
  if(state == oldState) errorStatus[STATE_ERROR_STATUS] = true; //SENSOR READING NOT UPDATED.Derivative can cup
    else errorStatus[STATE_ERROR_STATUS] = false;

  float error = setPoint - state;
  float deltaTime = (currentTime_ms - oldTime_ms)*0.001;
  oldTime_ms = currentTime_ms;

  float stateDerivative = (state - oldState)/deltaTime;
  errorIntegral += error*deltaTime;

  *output = kp*error + kd*stateDerivative + ki*errorIntegral;
  return 0; //successful
}
pid::pid(float x1,float x2,float x3): kp(x1), kd(x2), ki(x3)  {}
