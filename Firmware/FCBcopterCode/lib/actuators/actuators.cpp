#include "actuators.h"
// #define DRY_RUN

quadcopterActuators::quadcopterActuators():
  m1(ESC_1_PIN, ESC_PERIOD_MS), m2(ESC_2_PIN, ESC_PERIOD_MS), m3(ESC_3_PIN, ESC_PERIOD_MS), m4(ESC_4_PIN, ESC_PERIOD_MS)
{
  m1 = 0.0;
  m2 = 0.0;
  m3 = 0.0;
  m4 = 0.0;
  wait(3);
  //wait for esc's to initialise and settle down
}

void quadcopterActuators::dead()
{
  __disable_irq(); //just in case. This stops all the processes including isrs..
  for(int i=0;i<10;i++){
   m1 = 0;
   m2 = 0;
   m3 = 0;
   m4 = 0;
   m1();//send the values(PwmOut)
   m2();
   m3();
   m4();
   wait(0.5);
  }
  NVIC_SystemReset();
}
bool quadcopterActuators::updateMotors(float t1, float t2, float t3, float t4)
{
  thrust[0] = t1;
  thrust[1] = t2;
  thrust[2] = t3;
  thrust[3] = t4;
thrustToSpeed();
speedsToSPW();

//If the control inputs saturate then stop integral action
int stopIntegral = 0;
for(int j=0; j<4; j++)
{
  if(SPW[j] < MIN_MOTOR_THR || SPW[j] > MAX_MOTOR_THR ){
    stopIntegral = 1;
    break;
  }
}
#ifndef DRY_RUN
    m1 = throttleLimiter(SPW[0]);
    m2 = throttleLimiter(SPW[1]);
    m3 = throttleLimiter(SPW[2]);
    m4 = throttleLimiter(SPW[3]);

    m1();//send the values(PwmOut)
    m2();
    m3();
    m4();
#else
    m1 = 0;
    m2 = 0;
    m3 = 0;
    m4 = 0;
    m1();
    m2();
    m3();
    m4();
#endif

if(stopIntegral == 1) return 1;
else  return 0;
}

float quadcopterActuators::throttleLimiter(float thr)
{
  if(thr>MAX_MOTOR_THR) return MAX_MOTOR_THR;
  else if(thr<MIN_MOTOR_THR) return MIN_MOTOR_THR;
  else { return thr;}
}
int quadcopterActuators::thrustToSpeed()
{

  for(int i=0;i<4;i++)
  {
    if(thrust[i]<0) thrust[i] = 0.0;
    speeds[i] = sqrt(thrust[i]/CF_prop);
  }
  return 0;
}
int quadcopterActuators::speedsToSPW()
{
  for(int i=0;i<4;i++)
  {
    SPW[i] = speed_params[i][0]*(speeds[i]*speeds[i]) + speed_params[i][1]*speeds[i] + speed_params[i][2];
  }
  return 0;
}

int quadcopterActuators:: startMotors()
{
  m1 = MIN_MOTOR_THR;
  m2 = MIN_MOTOR_THR;
  m3 = MIN_MOTOR_THR;
  m4 = MIN_MOTOR_THR;
  m1();
  m2();
  m3();
  m4();
  return 0;
}
