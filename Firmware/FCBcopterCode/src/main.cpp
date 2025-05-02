/* Code for FCB 2.0, Rotorcraft Lab.
Please note that this work is strictly confidential.
reproduction is not allowed without approval from Prof. Ranjith Mohan or from Manoj Velmurugan
vmanoj1996@gmail.com

This is a quadcopter control code running on cascaded PID approach.
Firstly read readme.md if you have not done it yet
Most of the code is object oriented.

Prop rotation X configuration:
1,2 = CCW
3,4 = CW

//ARMING PROCEDURE
Channel 5 switch - high
Channel 6 switch - low
channel 3 throttle - low
channel 4 yaw control - high

//HEIGHT CONTROL CHANGE
channel 5

//DISARM
 Channel 6 switch - low
or
 channel 3 throttle - low && channel 4 yaw control - low

NOTE: PLUS MODE!!
Red taped arm corresponds to back side
Motor-3 Front
Motor-4 back
Motor-2 Left
Motor-1 Right
Frsky Taranis X8R reveiver is used for receiver
telemetry is connected to UART-6
Lidar is connected to SPI pins NSS(lower right)-monitor(white wire) ;  MOSI(lower left)-trigger(resistor wire)


I am planning to dump my support for platform-io in favour of mbed-cli
HOW TO COMPILE
 "make" in terminal (within this project working directory)
*/


#define ENABLE_TELE_LOGGING
// Only if the above line is enabled, FCB will transfer data to ground station using telemetry unit
//#include "HAL.h" //Contains most of the hardware oriented libraries
//#include "dataLogging.h" // Nothing useful is there currently

//#include "LED.h" // Code for handling display LEDs

#include <math.h>       /* acos */
#include "scheduler.h"
#include "receiver.h"
#include "controller_cascadedPID.h" //Contains the entire controller code Cascaded PID for quadcopter
#include "Pin_Declarations.h"
#define PI 3.14159265

//function Declarations /-------------------------------------------------------
void setup();
void loopMaster();
int disarm();
void dataLogger();
void imu_loop();
void inner_controller_loop();
void altitude_control_loop();
void alti_estimator_loop();
void led_loop();
int printFloat(float); // Converts floating data to int for faster transmission
int printInt(int);
void dataLogOrdering();
void xy_velocity();

//SCHEDULER PART /--------------------------------------------------------------
scheduler imu_sched(MPU_UPDATE_TIMING, &imu_loop);
scheduler inner_control_sched(ATT_RATE_TIMING, &inner_controller_loop);
scheduler alti_estimation_sched(ALT_CF_TIMING, &alti_estimator_loop);
scheduler altitude_control_sched(ALT_RATE_TIMING, &altitude_control_loop);
scheduler telemetry_sched(0.025, &dataLogger);
scheduler ledStat_sched(0.200, &led_loop);
scheduler XYflow_sched(XY_RATE_TIMING, &xy_velocity);

//IMPORTANT OBJECTS /-----------------------------------------------------------
ppm_receiver_8ch rx; //flysky - PPM receiver mode
Timer logTime;
int Bytes_sent;
bool transmit_flag = 1;

//Debug
// DigitalOut _debug(SPI2_MISO);

// MAIN CODE /------------------------------------------------------------------
int main()
{   setup();
    logTime.start();
    while(1) loopMaster(); // master loop with lot of subloops
}

void setup()
{
  // indicator_reset(); //Blink leds on reset
  tele.baud(115200);
  dataLogOrdering();

  if(imu.initialize() == -10)  //Upload IMU's DMP processor code, Bias correction and setup MPU9250
  { blue_led = 1;
    red_led = 1;
    while(1){;} }

  while(flow.initialize()!=0) { // check flow sensor. If it is stuck stop everything
    wait(0.02); //wait till you get data from flow sensor
  }

  alti.init();
  indicator_reset(); //red led blinks for a while
  rx.armingCheck(); //Lower Right. Check for Arming and check for the release of stick
  rx.stickCalibration(); //Stick calibration starts NOW
  green_led = 1;
  wait(1); //Motors are going to start haha

  //DANGER MOTOR ORDERing TEST
    // controller.motors.m1 = 0.15; controller.motors.m1();
    // wait(1);
    // controller.motors.m1 = 0; controller.motors.m1();
    // controller.motors.m2 = 0.15; controller.motors.m2();
    // wait(1);
    // controller.motors.m2 = 0; controller.motors.m2();
    // controller.motors.m3 = 0.15; controller.motors.m3();
    // wait(1);
    // controller.motors.m3 = 0; controller.motors.m3();
    // controller.motors.m4 = 0.15; controller.motors.m4();
    // wait(1);
    // controller.motors.m4 = 0; controller.motors.m4();
  controller.motors.startMotors();
  wait(2);
  // while(1){;}
//----NO CODE AFTER THIS LINE IN SETUP(Reserved for scheduler)--------------------------//
//These lines will connect the ISR functions to the Ticker interrupts at required time intervals
imu_sched.initialize(); //starts ticker.attach
inner_control_sched.initialize();
altitude_control_sched.initialize();
alti_estimation_sched.initialize();
telemetry_sched.initialize();
ledStat_sched.initialize();
XYflow_sched.initialize();
}

void loopMaster()
{
  inner_control_sched.checkAndExecute();
  altitude_control_sched.checkAndExecute();

  alti_estimation_sched.checkAndExecute();
  imu_sched.checkAndExecute(); // checks for timing condition and executes the function
  XYflow_sched.checkAndExecute();

  telemetry_sched.checkAndExecute();
  ledStat_sched.checkAndExecute();
}

// LOOP codes /-----------------------------------------------------------------
void imu_loop()
{
   // _debug = 1;
  imu.update();
   // _debug = 0;
}

void inner_controller_loop()
{
  /*
  Inner Loop PID 3 axis-- angular rate controller
  Write signals into ESC
  */
   // _debug =1;

  controller.angle_controller(); //Run angle controller.
  controller.rate_controller(); //Run rate controller
  //Angle stabilization moved to the inner loop after Siddhartha's suggestion!
  disarm(); //check for disarm condition
  controller.motorMixer_plus_mode(); //Mixes and uploads the final input_signal to ESC
   // _debug = 0;
}

void led_loop() { green_led = !green_led; }

void alti_estimator_loop( )
{
  // _debug = 1;
  alti.update( (imu.acc_g[2]-1.0)*9.81 );
  // _debug = 0;
}

void altitude_control_loop()
{
  #ifdef ENABLE_HEIGHT_RATE_CONTROLLER
    controller.heightRateController();
  #endif
}
void xy_velocity()
{
  // _debug = 1;
  controller.getRxData(rx.input_signal,rx.centerSticks); //normalise the 1000-2000 signal to 0.0-1.0
  flow.update_flow(-imu.gyro_dps[0]*0.01745328 , imu.gyro_dps[1]*0.01745328);//obtain xy velocity estimate

  float ax = imu.acc_g[0]*9.81 - 9.81*(-imu.pitch)*0.01745328;
  float ay =-imu.acc_g[1]*9.81 + 9.81*(imu.roll)*0.01745328;

  float vx_FRD   = flow.x_flow_gyroCompensated*alti.height_meas ; //small angle
  float vy_FRD   = flow.y_flow_gyroCompensated*alti.height_meas ; //small angle approx

  xy_vel.run( ax, ay, vx_FRD, vy_FRD );//run at 0.020s
  controller.getSetpointAngles(); //Find setPoint for angle from normalised user input_signal
  // _debug = 0;
}
int disarm()
{
  if(rx.input_signal[3-1]<=1020 && rx.input_signal[4-1] <=1020)
  {
    wait(0.002);//check again and confirm
    if(rx.input_signal[3-1]<=1020 && rx.input_signal[4-1] <=1020)
    {
      controller.motors.dead();
    }
  }
  if( rx.input_signal[6-1]> 1800 ) //no confirmation huh
    {
      controller.motors.dead();
    }
  return 0;
}

int printFloat(float a)
{
  //tele.printf("%f ", a); //int_size=float_size. still printing as float is very bad
  Bytes_sent  += tele.printf( "%d ", static_cast<int>(a*1000) );
return 0;
}
int printInt(int a)
{
  //tele.printf("%f ", a); //int_size=float_size. still printing as float is very bad
  Bytes_sent+= tele.printf("%d ", a );
return 0;
}
void dataLogOrdering()
{;
  // tele.printf("\ntime_ms imu_roll imu_pitch ax ay az gx gy gz");
  // tele.printf(" Setpoint_rollRate set_pitchRate Setpoint_yawRate Setpoint_roll Setpoint_pitch");
  // tele.printf(" radio_3 height heightRate Setpoint_heightRate height_PID_output\n");
}

void dataLogger()
  {
  //for logging data
  //IDEA:
  /*
  Let me dumb not all the bytes at once.
  possibly this should not fill any buffer in a burst
  */
  // _debug = 1;
  #ifdef ENABLE_TELE_LOGGING
  //IMU FRAME NOT FRD
  if(transmit_flag == 1){
   printInt(logTime.read_ms());
   printFloat(imu.roll);
   printFloat(imu.pitch);
   printFloat(imu.acc_g[0]);
   printFloat(imu.acc_g[1]);
   printFloat(imu.acc_g[2]);
   printFloat(imu.gyro_dps[0]);
   printFloat(imu.gyro_dps[1]);
   printFloat(imu.gyro_dps[2]);
   printFloat(controller.Setpoint_rollRate);
   printFloat(controller.Setpoint_pitchRate);
   printFloat(controller.Setpoint_yawRate);
   printFloat(controller.Setpoint_roll);
   printFloat(controller.Setpoint_pitch);

   transmit_flag = 0;
 }
 else{
   //Maximum paylaod size in a packet is 84bytes. We shouold force packetisation by waiting for a while
   //Since waiting is bullshit in realtime sense. I am stopping the task of sending data midway and going to do someting else
   //later this else part will run and become a new packet.
   printFloat(controller.radio[3-1]);
   printFloat(controller.height_open_loop());
   printFloat(alti.height_meas);//meter
   printFloat(alti.velocityEstimate);
   printFloat(controller.Setpoint_heightRate);
   printFloat(controller.height_PID_output);
   printInt(controller.motors.m1.getThrottle());
   printInt(controller.motors.m2.getThrottle());
   printInt(controller.motors.m3.getThrottle());
   printInt(controller.motors.m4.getThrottle());
   printFloat(flow.x_flow_gyroCompensated);//rad/s
   printFloat(flow.y_flow_gyroCompensated);
   printFloat(flow.x_flow_gyroCompensated*alti.height_meas);//m/s
   printFloat(flow.y_flow_gyroCompensated*alti.height_meas);
   printFloat(flow.x_flow_unGyroCompensated );//rad/s
   printFloat(flow.y_flow_unGyroCompensated );
   printInt(flow.frame.quality);
   printFloat(xy_vel.vx_kal.Xk(0));
   printFloat(xy_vel.vy_kal.Xk(0));
   printFloat(xy_vel.vx_kal.Xk(1));
   printFloat(xy_vel.vy_kal.Xk(1));
   printInt(Bytes_sent);
   Bytes_sent = 0;
   transmit_flag = 1;
   tele.printf("\n");

 }
   // printFloat(controller.radio_off[0]);
   // printFloat(controller.radio_off[1]);
   // printFloat(controller.radio_off[2]);
   // printFloat(controller.motors.thrust[2]);
   // printFloat(controller.motors.thrust[3]);

  // for(int i = 0; i<6; i++)
  // {
  //   printFloat(rx.input_signal[i]);
  // }

  #endif
  // _debug = 0;
}
