#include <mbed.h>
#include "BMP280.h"
#define I2C3_SCL_PIN PA_8
#define I2C3_SDA_PIN PC_9

// #define BMP280_
#ifdef BMP280_
Serial pc(USBTX,USBRX);
BMP280 bmp(I2C3_SDA_PIN, I2C3_SCL_PIN);

int main() {
  float p;
  pc.baud(115200);
  bmp.initialize();
  wait(1);
    while(1) {
        // put your main code here, to run repeatedly:
        wait(0.1);
        p =bmp.getPressure();
        pc.printf("%f\n", p );
    }
    return 0;
}
#endif
#ifndef BMP280_
I2C i2c(I2C3_SDA_PIN, I2C3_SCL_PIN);        // sda, scl
Serial pc(USBTX, USBRX); // tx, rx
int main()
{
    pc.baud(115200);
    pc.printf("I2C scanner starting\n");

    i2c.frequency(100e3); // default freq (100kHz)

    const char *data = "1";

    int ack;
    unsigned char address;
    for (address = 1; address < 127; address++) {
        ack = i2c.write(address << 1, data, 1); // address is shifted to the left, because mbed uses 8bits
        if (ack == 0) {
            pc.printf("Sent 0x%X; 0x%X ACK \r\n", address << 1, address); // Send command string
        }
        wait_ms(2);
    }

    pc.printf("I2C scanner done\n");
}
#endif
//
// I2C i2c(I2C3_SDA_PIN, I2C3_SCL_PIN);
// Serial pc(USBTX, USBRX);
// int main()
// {
//
// }
