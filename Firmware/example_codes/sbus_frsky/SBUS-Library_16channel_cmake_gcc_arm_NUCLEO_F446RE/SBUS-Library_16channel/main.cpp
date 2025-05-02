#include "FutabaSBUS.h"
#include "TextLCD.h"
#include "mbed.h"

DigitalOut mled(LED4);
TextLCD lcd(p26, p25, p24, p23, p22, p20, p19, TextLCD::LCD20x4);
FutabaSBUS sbus(p28, p27);


int main() {
    sbus.passthrough(false);
    while (1) {
        sbus.servo(1,200);
        wait(0.5);
        sbus.servo(1,1700);
        wait(0.5);
        mled=!mled;
        
        lcd.locate(0,0);
        lcd.printf("fs:");
        lcd.printf("%i",sbus.failsafe());
        lcd.printf("   ");

        lcd.locate(0,1);
        lcd.printf("dg:");
        lcd.printf("%i",sbus.digichannel(1));
        lcd.printf("#");
        lcd.printf("%i",sbus.digichannel(2));
        lcd.printf("   ");

        lcd.locate(0,2);
        lcd.printf("Q:");
        lcd.printf("%i",sbus.channel(1));
        lcd.printf("   ");
        
        lcd.locate(10,2);
        lcd.printf("H:");
        lcd.printf("%i",sbus.channel(2));
        lcd.printf("   ");

        lcd.locate(0,3);
        lcd.printf("G:");
        lcd.printf("%i",sbus.channel(3));
        lcd.printf("   ");
        
        lcd.locate(10,3);
        lcd.printf("S:");
        lcd.printf("%i",sbus.channel(4));
        lcd.printf("   ");
        
    }
}
