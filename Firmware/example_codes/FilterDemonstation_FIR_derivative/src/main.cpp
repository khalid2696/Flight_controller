
#include "filter.h"

const int PID_Nc = 21;
float PID_filterCoefficients[PID_Nc] = {-0.0903,1.8434,-2.8054,-1.6687,5.0516,2.6807,-10.0757,-5.2319,23.7134,33.6844,0.0000,-33.6844,-23.7134,5.2319,10.0757,-2.6807,-5.0516,1.6687,2.8054,-1.8434,0.0903};
float PID_buffer[PID_Nc] = {0.0};
Timer sample_timer;
Ticker t;
volatile bool runFilter = false;
FIRfilter calcFilter(PID_Nc, PID_filterCoefficients, PID_buffer);
void loop();
void setup();
void ISR();
int main()
{   setup();
    while(1)
    {
        loop();
    }
}


Serial pc(USBTX,USBRX);
void setup()
{
  pc.baud(115200); //Lower baud rate can slow down the code.
  //Its is mostly interrupt based and will block our regular scheduler interrupts
  //this can lead to some cups!!
  sample_timer.start();
  t.attach(&ISR, 0.010);
}

float freq = 40.0;
const float pi = 3.14159;
float x = 0;
float y = 0;
void loop()
{
  if(runFilter ==true){
  runFilter = false;

   x= sin(2*pi*freq*sample_timer.read_ms()*0.001);
   //pc.printf("%d ",sample_timer.read_high_resolution_us());
   y= calcFilter.filter(x);
  //pc.printf("%f %f %d\n",x,y, sample_timer.read_high_resolution_us() );
  pc.printf("%f %f\n",x,y );
  }

}
void ISR()
{
  runFilter = true;
}
