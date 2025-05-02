/* This perhaps is the most important file. Control algorithm implementation can be found here.
Please avoid duplicate/redundant stuff as much as possible

Tunable/changable stuff includes the following,
	* control Gains described in src/parameters.h
	* Quadcopter physical parameters(size and stuff) given in lib/actuators.h
	* Default control action limits specified in pid_simple.h for attitude control. For altitude control it is given below
	* Loop timing given below
	* Sensor data acqusition time mentioned in their respective libraries in lib/ folder
	* Sensor fusion timing mentioned in the complementary filter files lib/ folder
	*
*/
#pragma once
//#define ACRO_MODE
#define ENABLE_HEIGHT_RATE_CONTROLLER
#define PAUSE_INTEGRAL_THRES 0.3 // Over 1300 Pulse width from third channel
 //of receiver is needed to enable integral action. This is need to reduce the integral windup issue before takeoff
#define ATT_RATE_TIMING 0.010 //100Hz loop  frequency
#define ALT_RATE_TIMING 0.010 //100Hz loop frequency


#define DEG2RAD 0.017453278 // pi/180
#define PITCH_ERROR_MAX 0.7 //40deg
#define HEIGHT_RATE_PID_MAX 8.0 // Newtons. extra net thrust
#define HEIGHT_RATE_PID_INTEGRAL_MAX 4.0 // Newtons. net extra thrust

#include "PID_SIMPLE.h"
#include "parameters.h"
#include "actuators.h"
#include "dataLogging.h"


  #include "imu_mpu9250_estimation.h"
  #include "altitudeComplementaryFilter.h"
  #include "xy_estimator.h"

class quadController
{
public:
  float volatile Setpoint_pitchRate = 0.0;
  float volatile Setpoint_rollRate =0.0;
  float volatile Setpoint_yawRate=0.0;
  volatile float Setpoint_pitch = 0.0, Setpoint_roll = 0.0;
  volatile float rate_pid_output_pitch = 0 ;
  volatile float rate_pid_output_roll = 0;
  volatile float rate_pid_output_yaw = 0;
  volatile bool pauseIntegral = true;
  float volatile radio[6] = {0, 0, 0, 0, 0, 0}; //normalised from 0-1.0
  volatile float radio_off[3] = {0.5,0.5,0.5}; //channel1,2,4
  Timer rateTimer, heightRateTimer, xy_vel_timer;

  quadController();
  int getRxData(volatile int *,volatile int *); // Converts radio raw data to 0-1.0 signal and offsets also
  int getSetpointAngles(); //gets desired angles from rx command
  int angle_controller(); //gets desired angular rate from desired angles
  int rate_controller(); //gets correction in each axis from 0 to 1 fraction of PWM. 1 implies max throttle to motor and vice versa
  pid pitch_rate_PID; //contains gains and filter for derivative
  pid roll_rate_PID;
  pid yaw_rate_PID;
  float height_open_loop();
  #ifdef ENABLE_HEIGHT_RATE_CONTROLLER
    float Setpoint_heightRate = 0.0;
    float height_PID_output = 0.0;
    int getSetpointHeightRate();
    int heightRateController();
    pid height_rate_PID;
    float altitudeFeedForward = 0.5;

    pid vx_PID;
    pid vy_PID;
    int xy_control();
  #endif
  int motorMixer_x_mode();
  int motorMixer_plus_mode();

  // int loadGains();
  quadcopterActuators motors;

}controller;


quadController::quadController():
  pitch_rate_PID( gain.rate_pitch[0], gain.rate_pitch[1], gain.rate_pitch[2] ,ATT_RATE_TIMING,  \
    gain.rate_pitch[3], gain.rate_pitch[4],  gain.rate_pitch[5]),
  roll_rate_PID( gain.rate_roll[0], gain.rate_roll[1], gain.rate_roll[2], ATT_RATE_TIMING,   \
    gain.rate_roll[3] , gain.rate_roll[4],  gain.rate_roll[5]  ),
  yaw_rate_PID( gain.rate_yaw[0], gain.rate_yaw[1], gain.rate_yaw[2], ATT_RATE_TIMING  )
  #ifdef ENABLE_HEIGHT_RATE_CONTROLLER
  ,height_rate_PID(gain.rate_height[0], gain.rate_height[1], gain.rate_height[2], ALT_RATE_TIMING,\
    gain.rate_pitch[3], gain.rate_pitch[4],  gain.rate_pitch[5]),
  vx_PID(gain.xy_v_PID[0], gain.xy_v_PID[1], gain.xy_v_PID[2], XY_RATE_TIMING ) ,
  vy_PID(gain.xy_v_PID[0], gain.xy_v_PID[1], gain.xy_v_PID[2], XY_RATE_TIMING )
  #endif
{
  rateTimer.start();
  heightRateTimer.start();
  xy_vel_timer.start();

  height_rate_PID.PID_lowerLimit       = -HEIGHT_RATE_PID_MAX;
  height_rate_PID.PID_upperLimit       = HEIGHT_RATE_PID_MAX;       //8 Newtons. Note without ff term quad cannot fly
  height_rate_PID.integral_claming_lmt = HEIGHT_RATE_PID_INTEGRAL_MAX; //x newtons. so it can handle x/10 gms difference in mass

  vx_PID.PID_lowerLimit       = -0.349; //20deg
  vx_PID.PID_upperLimit       = 0.349; //20deg
  vx_PID.integral_claming_lmt = 0.175;

  vy_PID.PID_lowerLimit       = -0.349;
  vy_PID.PID_upperLimit       = 0.349;
  vy_PID.integral_claming_lmt = 0.175;
}

int quadController::getRxData(volatile int *temp, volatile int *temp_off)
{
  //normalizes the rx signal
  for(int i =0; i<=5; i++)
  {
    radio[i] = (temp[i]-1000.0) * 0.001; //normalised

    if(radio[i]>1.0 ) radio[i] = 1.0;
    else if( radio[i]<0.0 ) radio[i] = 0.0;
      }
  for(int i=0;i<3;i++){
    radio_off[i] = (temp_off[i]-1000.0)*0.001;
  }
  if(radio[3-1]<PAUSE_INTEGRAL_THRES) pauseIntegral = true;
  else pauseIntegral = false;
  //This safeguard is used to pause the integral of rate controller whenever
  //the drone is not in controllable zone. For example ground
  return 0;
}

int quadController::getSetpointAngles(){
  if( radio[5-1]<0.2 ){
    // Enable XY Velocity Hold
    // float vy_FRD   = flow.y_flow_gyroCompensated*alti.height_meas ; //small angle approx
    // float vx_FRD   = flow.x_flow_gyroCompensated*alti.height_meas ; //small angle
    // float error_vy = 0.0 - vy_FRD;
    // float error_vx = 0.0 - vx_FRD;

    float vx_FRD = xy_vel.vx_kal.Xk(0);
    float vy_FRD = xy_vel.vy_kal.Xk(0);

    float dt_ms = (float) xy_vel_timer.read_ms();
    if(dt_ms>=(XY_RATE_TIMING*1000.0+10.0)) dt_ms = (XY_RATE_TIMING*1000.0+10.0);// First time when it runs dt will be very high

    Setpoint_pitch = -vx_PID.PIDcalc(vx_FRD, 0, dt_ms, pauseIntegral );
    Setpoint_roll  =  vy_PID.PIDcalc(vy_FRD, 0, dt_ms, pauseIntegral );
    xy_vel_timer.reset(); //start counting from beginning
    // Setpoint_pitch = -(0.0 - vx_FRD)*0.129;
    // Setpoint_roll  =  (0.0 - vy_FRD)*0.129;
    Setpoint_yawRate = 0.0;
  }
  else{
    Setpoint_pitch   = (radio[2-1]-radio_off[1]) * gain.rx_sensitivity[0]*DEG2RAD;
    Setpoint_roll    = (radio[1-1]-radio_off[0]) * gain.rx_sensitivity[1]*DEG2RAD;
    Setpoint_yawRate = (radio[4-1]-radio_off[2]) * gain.rx_sensitivity[2]*-1.0*DEG2RAD; //CHANNEL REVERSE JUGAAD
  }
  return 0;
}

int quadController::angle_controller()
{
  //JUGAAD ALERT: changing frame in code
   float pitch_FRD = -imu.pitch*DEG2RAD; // in radians
   float roll_FRD = imu.roll*DEG2RAD;
   #ifndef ACRO_MODE
   float pitchError = (Setpoint_pitch - pitch_FRD);
   if(pitchError>PITCH_ERROR_MAX) pitchError= PITCH_ERROR_MAX;
   else if(pitchError<-PITCH_ERROR_MAX) pitchError = -PITCH_ERROR_MAX;

   float rollError  = (Setpoint_roll  - roll_FRD );
   if(rollError>PITCH_ERROR_MAX) rollError = PITCH_ERROR_MAX;
   else if(rollError<-PITCH_ERROR_MAX) rollError = -PITCH_ERROR_MAX;
   // I am limiting the roll and pitch angle maximum error. In case there is huge noise in measurement, this should
   // limit the amount of trouble given by noise
   Setpoint_pitchRate = gain.ang_pitch*pitchError; // converting to radians
   Setpoint_rollRate = gain.ang_roll*rollError; // converting to radians as the simulation is radians based!!!

   #else
   Setpoint_pitchRate = gain.ang_pitch*(Setpoint_pitch );
   Setpoint_rollRate = gain.ang_roll*(Setpoint_roll);
   #endif
   return 0;
}

int quadController::rate_controller()
{

  //Frame conversion from (x,y,z)={front,left,up} to (x,y,z)={front, right,down}
    float gx_FRD = imu.gyro_dps[0]; //unit is deg per sec after conversion !!
    float gy_FRD = -imu.gyro_dps[1];
    float gz_FRD = -imu.gyro_dps[2];

    rate_pid_output_pitch = pitch_rate_PID.PIDcalc( gy_FRD*DEG2RAD, Setpoint_pitchRate,(float)rateTimer.read_ms(), pauseIntegral);
    rate_pid_output_roll  = roll_rate_PID.PIDcalc(  gx_FRD*DEG2RAD, Setpoint_rollRate,(float)rateTimer.read_ms(),  pauseIntegral);
    rate_pid_output_yaw   = yaw_rate_PID.PIDcalc(   gz_FRD*DEG2RAD, Setpoint_yawRate,(float)rateTimer.read_ms(),   pauseIntegral);
    rateTimer.reset(); // start counting from beginning; This is important!!
  return 0;
}

float quadController::height_open_loop()
{
  //find the total thrust to be given(approx)

  float omega = APPROX_OMEGA_PW_MAP * radio[3-1];
  return 4*CF_prop*omega*omega;
}

int quadController::motorMixer_plus_mode()
{
    #ifdef ENABLE_HEIGHT_RATE_CONTROLLER
      float totalThrust = height_PID_output;
    #else
      float totalThrust = height_open_loop();
    #endif
      float pTorq =  rate_pid_output_pitch;
      float rTorq =  rate_pid_output_roll;
      float yTorq =  rate_pid_output_yaw;
  float m1, m2, m3, m4;
  //according to front, right, down direction(x,y,z). IMU follows a different orientation!!
  m1 = 0.25*totalThrust - rTorq*0.5/ARM_LENGTH + 0.25*yTorq*CF_prop/CQ_prop;
  m2 = 0.25*totalThrust + rTorq*0.5/ARM_LENGTH + 0.25*yTorq*CF_prop/CQ_prop;
  m3 = 0.25*totalThrust + pTorq*0.5/ARM_LENGTH - 0.25*yTorq*CF_prop/CQ_prop;
  m4 = 0.25*totalThrust - pTorq*0.5/ARM_LENGTH - 0.25*yTorq*CF_prop/CQ_prop;
  //pc.printf("%0.4f %0.4f ,%0.4f %0.4f %0.4f %0.4f ,%0.4f %0.4f %0.4f %0.4f\n",meanThr,yThr,rThr,pThr,-imu.yaw,imu.calcGyro(imu.gz),m1,m2,m3,m4);
  pauseIntegral = motors.updateMotors(m1, m2, m3, m4);
  // Anti windup. IF the motor inputs are not in controlable zone then integral value is freezed.
return 0;
}

#ifdef ENABLE_HEIGHT_RATE_CONTROLLER
  int quadController::getSetpointHeightRate()
  {
    if( radio[3-1]<0.6 && radio[3-1]>0.4 ) Setpoint_heightRate = 0.0;
    else if( radio[3-1]<0.4 ) Setpoint_heightRate = ( radio[3-1]-0.4 )*gain.HeightRateSensitivity;
    else if( radio[3-1]>0.6 ) Setpoint_heightRate = ( radio[3-1]-0.6 )*gain.HeightRateSensitivity;
    return 0;
  }
  int quadController::heightRateController()
  {
    getSetpointHeightRate();
    if(radio[5-1]>0.8) {  pauseIntegral =true;
                          height_rate_PID.integralCorrection = 0.0;
                          height_PID_output = height_open_loop();
                          altitudeFeedForward = height_open_loop(); // for bumpless transfer
                          heightRateTimer.reset();} //Switch over to manual model}
    else {  pauseIntegral = false;
            height_PID_output = altitudeFeedForward + height_rate_PID.PIDcalc(alti.velocityEstimate, Setpoint_heightRate , heightRateTimer.read_ms(), pauseIntegral);
            heightRateTimer.reset();}
    return 0;
  }

#endif

// int quadController::loadGains(){
//   float Max_gain = 0.008;
//   gain.kp_rp_rate= ( (float)radio[5-1] )*Max_gain; //5th channel
//   gain.kd_rp_rate= gain.kp_rp_rate/20.0;//( (float)radio[6-1] )*Max_gain;
//   gain.ki_rp_rate= 2*gain.kp_rp_rate;
//   gain.ang_pitch = gain.ang_roll = 3.0;//( (float)radio[6-1] )*5.0;
//   gain.rate_yaw[0] =( (float)radio[6-1] )*0.01;
//   gain.updateGains(); //This will update the gains. Dont do this in operation of drone!! keep it at low when beginning
//   pitch_rate_PID.kp = gain.rate_pitch[0];
//   pitch_rate_PID.ki = gain.rate_pitch[2];
//   pitch_rate_PID.kd = gain.rate_pitch[1];
//   roll_rate_PID.kp =  gain.rate_roll[0];
//   roll_rate_PID.ki =  gain.rate_roll[2];
//   roll_rate_PID.kd =  gain.rate_roll[1];
//   yaw_rate_PID.kp =   gain.rate_yaw[0];
//   yaw_rate_PID.ki =   gain.rate_yaw[2];
//   yaw_rate_PID.kd =   gain.rate_yaw[1];
//
// return 0;
// }
