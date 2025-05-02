#include <mbed.h>
#include "rtos.h"
#include "Pin_Declarations.h"

DigitalOut red(LED_RED_PIN);
DigitalOut blue(LED_BLUE_PIN);
DigitalOut green(LED_GREEN_PIN);

Thread thread1;
Thread thread2;
Thread thread3;

void func1() {while(1){ red   = !red;   Thread::wait(100); }}
void func2() {while(1){ blue  = !blue;  Thread::wait(100); }}
void func3() {while(1){ green = !green; Thread::wait(250); }}

int main() {
  //red=blue=green=1;
  thread1.start(func1);
  thread2.start(func2);
  thread3.start(func3);

    while(1) {
    //  Thread::wait(1000);
    }
}
// #include "mbed.h"
// #include "rtos.h"
//  #include "Pin_Declarations.h"
// //DigitalOut red(LED_RED_PIN);
// DigitalOut blue(LED_BLUE_PIN);
// DigitalOut green(LED_GREEN_PIN);
// Thread thread;
//
// void led2_thread() {
//     while (true) {
//         blue = !blue;
//         Thread::wait(1000);
//     }
// }
//
// int main() {
//     thread.start(led2_thread);
//
//     while (true) {
//         green = !green;
//         Thread::wait(500);
//     }
// }
// http://docs.platformio.org/en/latest/frameworks/mbed.html#configuration
