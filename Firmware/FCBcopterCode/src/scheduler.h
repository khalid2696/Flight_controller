/* Improved Scheduler for Flight Control Board V2
Currently supports only void type executables (funcs that take in nothing and returns nothing)
reference to function pointers https://www.eskimo.com/~scs/cclass/int/sx10a.html
*/
#pragma once
#include "mbed.h"
typedef void (*funcPtr_void)(); // datatype of pointer to function returning void

class scheduler
{
public:
  Ticker tick;
  float executionTimeGap;
  volatile bool executionFlag = false;
  funcPtr_void executableFunc; //executableFunc is a function pointer
public:
  scheduler(float, funcPtr_void );
  void initialize();
  void flagISR(void);
  int checkAndExecute();
};

void scheduler::flagISR(void)
{
  executionFlag = true;
}
scheduler::scheduler(float timing, funcPtr_void func)
{
  executionTimeGap = timing;
  executableFunc = func; //store the memory address of funtion to execute!
}
void scheduler::initialize()
{
  tick.attach( callback(this,&scheduler::flagISR), executionTimeGap);
}
int scheduler::checkAndExecute()
{
  if(executionFlag == true){
    executionFlag = false;
    (*executableFunc)();
  }
}
