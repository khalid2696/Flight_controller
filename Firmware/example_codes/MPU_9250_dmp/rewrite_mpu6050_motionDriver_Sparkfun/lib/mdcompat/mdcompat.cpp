#define I2C3_SCL PA_8
#define I2C3_SDA PC_9


#include "mdcompat.h"
#include "mbed.h" // must be out of the scope of extern "C"
I2C imu9250(I2C3_SDA,I2C3_SCL);
Ticker stamper;
unsigned long stamper_count=0;
void counter(){
    stamper_count++;
}
void stamper_init(void){
stamper.attach(&counter,1);
}
void imu_init(void){
imu9250.frequency(400000);
}
unsigned short constrain(
    unsigned short x,
    unsigned short a,
    unsigned short b) {unsigned short result;
    result= (x<a) ? a:x;
    result= (x>b) ? b:x;
    return result;
}

extern "C" {

int mbed_i2c_write(
    unsigned char slave_addr,
    unsigned char reg_addr,
    unsigned char length,
    unsigned char *data) {

    unsigned char buffer[length+1];
    buffer[0]=reg_addr;
    for(int i=0;i<length;i++){
        buffer[i+1]=data[i];
    }
    const char* x=(const char*)buffer;//

    imu9250.write((int)slave_addr<<1,x,length+1,0);//sending register adress first to indicate which register we are writing and a write register(0)
    return 0;
}

int mbed_i2c_read(
    unsigned char slave_addr,
    unsigned char reg_addr,
    unsigned char length,
    unsigned char *data) {const char RA[]={reg_addr};
    unsigned char buffer[length];
    for(int i=0;i<length;i++){
        buffer[i]=data[i];
    }
    imu9250.write((int)slave_addr<<1,RA, 1, 1); // no stop
    imu9250.read((int)slave_addr<<1,(char*)data, length, 0);
    return 0;
}

int delay_ms(
    unsigned long num_ms) {
    wait_ms(num_ms);
    return 0;
}

int get_ms(
    unsigned long *count=(unsigned long*)malloc(sizeof(unsigned long))) {
        *count=stamper_count;
    return 0;
}

int reg_int_cb(
    void (*cb)(void),
    unsigned char port,
    unsigned char pin) {
    return 0;
}

long labs(long x) {
    return x > 0 ? x : -x;
}

float fabsf(float x) {
    return x > 0 ? x : -x;
}

int min(int a, int b) {
    return a > b ? b : a;
}

};
