#pragma once
#include "mbed.h"
#include "esc.h"
#include "Pin_Declarations.h"

#define MAX_MOTOR_THR 0.9
#define MIN_MOTOR_THR 0.150 //to prevent motors from stopping midflight and to make all the rotors rotate before takeoff
#define ESC_PERIOD_MS 10 //ms

//Dimensional aspects
// 9x4.5 inch prop, emax motor 2212 980kv, q450 FRAME
#define CF_prop           9.311e-06
#define CQ_prop           1.4831e-07 //uiuc
#define ARM_LENGTH         0.225
#define APPROX_OMEGA_PW_MAP 943.7

class quadcopterActuators
{
public:
  float thrust[4] = {0,0,0,0};  //N
  float speeds[4] = {0,0,0,0};  //rad/s
  float SPW[4]    = {0,0,0,0};  // 0-1
  float speed_params[4][3]      = { {0, 0.00105958, -0.049556}, //  u = p1*omega^2 + p2*omega + p3, {p1,p2,p3}
                                    {0, 0.00105958, -0.049556},
                                    {0, 0.00105958, -0.049556},
                                    {0, 0.00105958, -0.049556} };
  ESC m1; // specific pulsewidth
  ESC m2;
  ESC m3;
  ESC m4;
  int startMotors();
  int thrustToSpeed();
  int speedsToSPW();
  quadcopterActuators();
  bool updateMotors(float, float, float, float);
  float throttleLimiter(float);
  void dead();
};
