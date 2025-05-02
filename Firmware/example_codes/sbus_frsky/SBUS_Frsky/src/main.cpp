#include <mbed.h>
#include "FutabaSBUS_soft.h"
FutabaSBUS sbus(NC, PC_7);
Serial PC(USBTX, USBRX);

int main() {

    // put your setup code here, to run once:

    while(1) {
        // put your main code here, to run repeatedly:
for(int i = 1; i< 10; i++)
{       //sbus.update_channels();
        PC.printf("%d ", sbus.channel(i));
      }
      PC.printf("\n");
        wait(0.2);
      }
}
