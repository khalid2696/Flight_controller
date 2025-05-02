#define ESC_1_PIN PB_4
#define ESC_2_PIN PB_5
#define ESC_3_PIN PB_0
#define ESC_4_PIN PB_1
#define LED_BLUE_PIN PB_15

#include <mbed.h>
#include "esc.h"

ESC myesc(ESC_1_PIN);
ESC myesc1(ESC_2_PIN);
ESC myesc2(ESC_3_PIN);
//ESC myesc3(PB_1);
PwmOut cuppingESC(PB_1);
//int motorTest();

//ENABLE THE NEXT LINE TO REPRODUCE THE PWM CONFLICT PROBLEM!!
//PwmOut myLed(PB_15);
DigitalOut myLed(PB_15);
DigitalOut mled2(PB_14);
DigitalOut mled(PB_13);
int main() {
  myLed = 0;
  cuppingESC.period(0.010);
while(1){
    wait(0.1);
    myLed=1;
    mled2 = 1;
    mled=1;
          //myesc=0.15;
          //myesc();
          //myesc1=0.15;
          //myesc1();
          //myesc2=0.15;
          //myesc2();
          //myesc3=0.15;
          //myesc3(); //Black sheep
          cuppingESC.pulsewidth_us(1300);

    wait(0.1);
    myLed=0;
    mled2 =0;
    mled=0;
          //myesc=0;
          //myesc();
          //myesc1=0;
          //myesc1();
          //myesc2=0;
          //myesc2();
          cuppingESC.pulsewidth_us(1000);
          //myesc3();

}
}
// int motorTest()
// {
//     myesc.setThrottle(0.0);
//     myesc();
//     wait(2);
//     myesc=(0.2);
//     myesc();
//     wait(2);
//     myesc=(0.0);
//     myesc();
//     return 0;
//               }
