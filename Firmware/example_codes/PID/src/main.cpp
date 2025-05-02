#define FASTLOOP_TIME 0.250 //10MS
#include <mbed.h>
#include "PID.h"

Serial pc(USBTX,USBRX);
PwmOut myLed(PB_15);
pid pitchPid(1.0,1.0,1.0);
float state = 0.0;
float setPoint = 0;  //20 deg/s
Timer tim_ms;
volatile float pidOut = 0;
Ticker innerPID;
bool executeFastLoop = false; //false means donot do it
void loop();
void fastLoopISR();
int pidTestFn();
int main()
{
  pitchPid.PID_lowerLimit = -0.3;//Dont increase by more than 30% of thrust capacity
  pitchPid.PID_upperLimit = 0.3;
  tim_ms.start();
  innerPID.attach(&fastLoopISR,FASTLOOP_TIME );
  pc.baud(9600);
  while(1){loop();}
}

void loop()
{
  if(executeFastLoop == true) { pidTestFn();
                                executeFastLoop = false; }
  return;
}
int pidTestFn()
{
  float omega = 2*3.14/5;
  state = 1.5*sin(omega*tim_ms.read_ms()*0.001);
  pitchPid.PIDcalc(&pidOut,state, setPoint, tim_ms.read_ms());
  pc.printf("%f %f %d %d\n",state,pidOut,pitchPid.errorStatus[0],pitchPid.errorStatus[1]);
  return 0;
}
void fastLoopISR(){executeFastLoop = true;}
