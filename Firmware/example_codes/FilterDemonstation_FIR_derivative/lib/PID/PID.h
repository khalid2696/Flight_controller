/* PID library for FCB 2.0
  written by Manoj Feb 2018
  Features needed/added:
  *Integral Windup - Limiting integral maximum, Antiwindup, stop adding
  *Derivative filter (LOW PASS)
  *Derivative action on state and not on error
  *Adding saturation/cap/Limit the outputs

  */
#define MAX_DEFAULT_PID_LMT 0.5
#define MIN_PID_CYCLE_TIME_MS 4
#define MAX_PID_CYCLE_TIME_MS 30
#define TIME_ERROR_STATUS 0 //index of the status array
#define STATE_ERROR_STATUS 1
#define SATURATION_ERR_STATUS 2
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
  pid(float,float ,float);
  int PIDcalc(volatile float *,float ,float, float);
  void errorChecker();
  void limiter(float *x, float lb, float ub);
  pid(float,float ,float);

};
