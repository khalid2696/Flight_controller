/**
 *  BMP280 Combined humidity and pressure sensor library
 *
 *  @author  Toyomasa Watarai
 *  @version 1.0
 *  @date    06-April-2015
 *
 *  Library for "BMP280 temperature, humidity and pressure sensor module" from Switch Science
 *    https://www.switch-science.com/catalog/2236/
 *
 *  For more information about the BMP280:
 *    http://ae-bst.resource.bosch.com/media/products/dokumente/BMP280/BST-BMP280_DS001-10.pdf
 */

#include "mbed.h"
#include "BMP280.h"

BMP280::BMP280(PinName sda, PinName scl, char slave_adr)
    :
    i2c_p(new I2C(sda, scl)), 
    i2c(*i2c_p),
    address(slave_adr),
    t_fine(0)
{
    initialize();
}

BMP280::BMP280(I2C &i2c_obj, char slave_adr)
    :
    i2c_p(NULL), 
    i2c(i2c_obj),
    address(slave_adr),
    t_fine(0)
{
    initialize();
}

BMP280::~BMP280()
{
    if (NULL != i2c_p)
        delete  i2c_p;
}
    
void BMP280::initialize()
{
    char cmd[18];
 
    //cmd[0] = 0xf2; // ctrl_hum
    //cmd[1] = 0x01; // Humidity oversampling x1
    //i2c.write(address, cmd, 2);
 
    cmd[0] = 0xf4; // ctrl_meas
    cmd[1] = 0x2B; // Temparature oversampling x1, Pressure oversampling x1, Normal mode
    i2c.write(address, cmd, 2);
 
    cmd[0] = 0xf5; // config
    cmd[1] = 0x00; // Standby 1000ms, Filter off ///
    //CON FILTRO 2 ...
    i2c.write(address, cmd, 2);
 
    cmd[0] = 0x88; // read dig_T regs
    i2c.write(address, cmd, 1);
    i2c.read(address, cmd, 6);
 
    dig_T1 = (cmd[1] << 8) | cmd[0];
    dig_T2 = (cmd[3] << 8) | cmd[2];
    dig_T3 = (cmd[5] << 8) | cmd[4];
 
    DEBUG_PRINT("dig_T = 0x%x, 0x%x, 0x%x\n", dig_T1, dig_T2, dig_T3);
 
    cmd[0] = 0x8E; // read dig_P regs
    i2c.write(address, cmd, 1);
    i2c.read(address, cmd, 18);
 
    dig_P1 = (cmd[ 1] << 8) | cmd[ 0];
    dig_P2 = (cmd[ 3] << 8) | cmd[ 2];
    dig_P3 = (cmd[ 5] << 8) | cmd[ 4];
    dig_P4 = (cmd[ 7] << 8) | cmd[ 6];
    dig_P5 = (cmd[ 9] << 8) | cmd[ 8];
    dig_P6 = (cmd[11] << 8) | cmd[10];
    dig_P7 = (cmd[13] << 8) | cmd[12];
    dig_P8 = (cmd[15] << 8) | cmd[14];
    dig_P9 = (cmd[17] << 8) | cmd[16];
 
    DEBUG_PRINT("dig_P = 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x\n", dig_P1, dig_P2, dig_P3, dig_P4, dig_P5, dig_P6, dig_P7, dig_P8, dig_P9);
 }
 
float BMP280::getTemperature()
{
    uint32_t temp_raw;
    float tempf;
    char cmd[4];
 
    cmd[0] = 0xfa; // temp_msb
    i2c.write(address, cmd, 1);
    i2c.read(address, &cmd[1], 3);
 
    temp_raw = (cmd[1] << 12) | (cmd[2] << 4) | (cmd[3] >> 4);
    //printf("tem b: %d\n",temp_raw);
    int32_t temp;
 
    temp =
        (((((temp_raw >> 3) - (dig_T1 << 1))) * dig_T2) >> 11) +
        ((((((temp_raw >> 4) - dig_T1) * ((temp_raw >> 4) - dig_T1)) >> 12) * dig_T3) >> 14);
    //printf("%d\n",temp_raw);
    t_fine = temp;
    temp = (temp * 5 + 128) >> 8;
    tempf = (float)temp;
 
    return (tempf/100.0f);
}
 
float BMP280::getPressure()
{
    uint32_t press_raw;
    float pressf;
    char cmd[4];
    
    cmd[0] = 0xf7; // press_msb
    i2c.write(address, cmd, 1);
    i2c.read(address, &cmd[1], 3);
 
    press_raw = (cmd[1] << 12) | (cmd[2] << 4) | (cmd[3] >> 4);
 
    int32_t var1, var2;
    uint32_t press;
 
    var1 = (t_fine >> 1) - 64000;
    var2 = (((var1 >> 2) * (var1 >> 2)) >> 11) * dig_P6;
    var2 = var2 + ((var1 * dig_P5) << 1);
    var2 = (var2 >> 2) + (dig_P4 << 16);
    var1 = (((dig_P3 * (((var1 >> 2)*(var1 >> 2)) >> 13)) >> 3) + ((dig_P2 * var1) >> 1)) >> 18;
    var1 = ((32768 + var1) * dig_P1) >> 15;
    if (var1 == 0) {
        return 0;
    }
    press = (((1048576 - press_raw) - (var2 >> 12))) * 3125;
    if(press < 0x80000000) {
        press = (press << 1) / var1;
    } else {
        press = (press / var1) * 2;
    }
    var1 = ((int32_t)dig_P9 * ((int32_t)(((press >> 3) * (press >> 3)) >> 13))) >> 12;
    var2 = (((int32_t)(press >> 2)) * (int32_t)dig_P8) >> 13;
    press = (press + ((var1 + var2 + dig_P7) >> 4));
 
    pressf = (float)press;
    return (pressf/100.0f);
}