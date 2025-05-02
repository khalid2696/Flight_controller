#include "mbed.h"
#include "BufferedSerial.h"
#include "Pin_Declarations.h"
#include "LED.h"

BufferedSerial tele( UART_6_TX, UART_6_RX ); //UART - 6 the one used currently for telemetry
int Bytes_sent = 0;
void dataLogger();

int main() {
  tele.baud(115200);
    while(1) {
         red_led = !red_led;
         dataLogger();
         wait(0.050);
    }
}

int printFloat(float a)
{
  //tele.printf("%f ", a); //int_size=float_size. still printing as float is very bad
  Bytes_sent += tele.printf("%d ", static_cast<int>(a*1000) );
return 0;
}

void dataLogger()
  {
  //for logging data
  //IMU FRAME NOT FRD
   printFloat(112450);

   // typical values
    printFloat(5.012);
    printFloat(5.012);
    printFloat(0.123456);
    printFloat(0.123456);
    printFloat(1.123456);
    printFloat(90.12345);
    printFloat(90.12345);
    printFloat(90.12345);
    printFloat(90.12345);
    printFloat(90.12345);
    printFloat(90.12345);
    printFloat(5.012);
    printFloat(5.012);
    printFloat(5.012);
    printFloat(5.012);
    printFloat(0.123456);
    printFloat(0.123456);
    printFloat(1.123456);


   //height stuff
   printFloat(1500);
   printFloat(2.1345654);
   printFloat(200.123456);
   printFloat(0.123456);
   printFloat(0.123456);
   printFloat(30.123456);

   //Final stuff
   printFloat(1500);
   printFloat(1500);
   printFloat(1500);
   printFloat(1500);
   printFloat(1500);
   tele.printf("%d ", Bytes_sent);
   Bytes_sent = 0;
  // printFloat(1500);
   tele.printf("\n");
   // printFloat(controller.radio_off[0]);
   // printFloat(controller.radio_off[1]);
   // printFloat(controller.radio_off[2]);
   // printFloat(controller.motors.thrust[2]);
   // printFloat(controller.motors.thrust[3]);




  // for(int i = 0; i<6; i++)
  // {
  //   printFloat(rx.input_signal[i]);
  // }

}
