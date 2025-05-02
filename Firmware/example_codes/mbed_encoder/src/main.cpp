#include <mbed.h>
#include "BufferedSerial.h"
#include "quadratureEncoder.h"

#define PIN_A PB_4
#define PIN_B PB_5

Serial pc(USBTX, USBRX);
quadrature enco(PIN_A, PIN_B);

int main()
{
  pc.baud(115200);
  while(1){
    pc.printf("%f\n",enco.counts/4000.0*360.0);// counts/cpr*360degrees
    wait(0.02);
  }
  return 0 ;
}
