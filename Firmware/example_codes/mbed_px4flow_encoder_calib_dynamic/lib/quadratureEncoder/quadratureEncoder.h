#pragma once
/*
Concepts are explained in the following site
https://www.edn.com/design/integrated-circuit-design/4363949/DeResumecode-a-quadrature-encoder-in-software
*/
#include "mbed.h"
class quadrature
{
public:
  volatile int counts        = 0;
  volatile int previousstate = 0;

  InterruptIn pinA;
  InterruptIn pinB;

  int getState(int,int);
  void InterruptFunc();
  quadrature(PinName, PinName);
};

quadrature::quadrature(PinName a, PinName b):
  pinA(a), pinB(b)
{
  pinA.rise(this, &quadrature::InterruptFunc);
  pinB.rise(this, &quadrature::InterruptFunc);
  pinA.fall(this, &quadrature::InterruptFunc);
  pinB.fall(this, &quadrature::InterruptFunc);

}

void quadrature::InterruptFunc()
{
  //This function basically finds the rotation direction and changes the count value
  int pinA_val=pinA.read();
  int pinB_val=pinB.read();
  int currentstate = getState(pinA_val,pinB_val);

  if(previousstate==0 && currentstate==3)
  {
    --counts;

  }
  else if(previousstate==3 && currentstate==0)
  {
    ++counts;
  }
  else if(currentstate>previousstate)
  {
    ++counts;
  }
  else if(currentstate<previousstate)
  {
    --counts;
  }
  previousstate=currentstate;
}

int quadrature::getState(int pinAval,int pinBval)
{
  //This function returns the current state(0,1,2,3) of th encoder shaft. Refer to the website given above
  
  if(pinAval==0 && pinBval==1)
  {
    return 3;
  }
  else if(pinAval==1 && pinBval==1)
  {
    return 2;
  }
  else if(pinAval==1 && pinBval==0)
  {
    return 1;
  }
  else if(pinAval==0 && pinBval==0)
  {
    return 0;
  }
}
