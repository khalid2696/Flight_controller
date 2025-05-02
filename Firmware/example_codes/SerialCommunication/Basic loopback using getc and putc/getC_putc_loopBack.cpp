#include "mbed.h"

DigitalOut led(LED1);
void loop(); 
Serial loopBack(PC_6, PC_7); //(tx,rx) //loop back test connection for both transmission and reception
Serial PC(USBTX, USBRX); //PC connection. only for debugging and showing result
Timer t;

int main() 
{
    //SETUP CODE
    led = 1; //Notification LED
    loopBack.baud(57600); //baud rate/transmisssion rate for loopback
    PC.baud(57600); //baud rate for PC connection
    t.start();
    
    
    while(1){loop();} //loop
    return 0;
}

void loop()
{   
    loopBack.putc('1'); //Transmitting data from tx pin
    t.reset(); //reset the timer to take next reading 
    char a = loopBack.getc(); //transmitted data from tx is shorted to rx and read using getc
    int elapsed_time_rx = t.read_us(); //check the time needed for receiving the data
    PC.putc(a); //Then it is printed to computer/PC for display!!

    PC.printf("\t %d \n", elapsed_time_rx);
    wait(2);
}
