
#include "mbed.h"

Serial pc(USBTX, USBRX);
Serial pozyx(PC_6, PC_7);//arduino-pozyx
int x,y,z;

int main()
{
  pc.baud(115200);
  pc.printf("pozyx %");

  while(1)
  {
  if(pozyx.readable()>0)
    {
      pc.printf("entered");
      pozyx.scanf("%d %d %d",&x,&y,&z);
    }
  else pc.printf("not readable");

  pc.printf("x %d    y %d    z %d", x,y,z);

  wait(0.5);
  }
return 0;
}
