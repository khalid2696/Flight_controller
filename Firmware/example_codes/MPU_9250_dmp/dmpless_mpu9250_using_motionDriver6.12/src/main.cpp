/* Instead of using dmp or fifo buffer of mpu9250/mpu6050/...
one can use the acceleration and gyroscope values alone by direct i2c register read.
This is lot simpler than fifo buffer/ buffer overflow/ some random delays...

So we will need our own sensor fusion algorithm for mixing the gyro and
 accelerometer values for quadcopter.(complementary filter)

*/
#include "mbed.h"
#include "imu_mpu9250_comp_filter.h"
#define LED_RED_PIN PB_13
DigitalOut redLed(LED_RED_PIN);
int loop();
Serial PC(USBTX,USBRX);
Timer t;
MPU95250_IMU imu;

int main()
{
  t.start();
  PC.baud(115200);
  imu.initialize();
  while(1){loop();};
  return 0;
}

int loop()
{
  wait(0.004);
  imu.updateRollPitch();
  PC.printf("\n%d ",t.read_ms());
  // PC.printf("%f %f %f ",imu.gyro_dps[0], imu.gyro_dps[1], imu.gyro_dps[2]);
  // PC.printf("%f %f %f ",imu.acc_g[0], imu.acc_g[1], imu.acc_g[2]);
  PC.printf("%d %d ",static_cast<int> (imu.pitch*1000),static_cast<int> (imu.roll*1000));
  PC.printf("%d %d ", static_cast<int> (imu.onlyGyroPitch*1000), static_cast<int> (imu.onlyGyroRoll*1000));
  PC.printf("%d %d", static_cast<int> (imu.pitchAcc*1000), static_cast<int> (imu.rollAcc*1000));

  return 0;
}
