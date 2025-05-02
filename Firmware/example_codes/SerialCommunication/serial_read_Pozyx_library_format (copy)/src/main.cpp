
#include "mbed.h"
#include "pozyx.h"

void loop();

pozyx_arduino_interface pozyx;
Serial PC(USBTX, USBRX);

int main()
{
PC.baud(57600);

while(1) {loop();}
return 0;
}

void loop()
{
wait(0.1);
pozyx.update();
PC.printf("%f %f %f %f %f %f\n" , pozyx.xyz[0], pozyx.xyz[1], pozyx.xyz[2], pozyx.xyz[3] /
    pozyx.xyz[4], pozyx.xyz[5] );
}
