#include <mbed.h>
#include "FutabaSBUS.h"
FutabaSBUS sbus(NC, PC_7);
Serial PC(USBTX, USBRX);
DigitalOut led(LED1);

int main() {
  PC.baud(57600);
  led=1;
              while(1) {
                led=0;
                          for(int i = 1; i< 10; i++)
                          {
                            PC.printf("%d ", sbus.channel(i));
                            led=!led;
                            }
                            PC.printf("\n");
                            led=1;
                            wait(0.010);
                          }
}
