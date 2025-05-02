
#include "parameters.h"
#include "PID_SIMPLE.h"
#include "actuators.h"
#include "imu.h"
#include "pozyx.h"

class quadController
{
public:

  float radio[6] = {0,0,0,0,0,0}; //normalised from 0-1.0
  Timer rateTimer; //To keep/track time

  pid quat_angle_controller; //for the final angle control loop
  quadcopterActuators motors; //contains all 4 motors

  quadController(); //Initialize objects and variables
  int getRxData(); //get the user input in desired format.
  int getIMUquaternion(); //get quaternion form IMU in float format
  int getPositionError(); //calculate position error
  int PositionController(); 

}controller;
