#pragma once
/*
Kalman filter code written by Manoj Velmurugan for Attitude estimation
in FCB2.0
This is not currently used in control code as my complementary
filter is proven to be robust. But this code estimates the bias of
angular velocity which will find its use in px4flow sensor
  States are (Angle,bias)
  Input is (measured omega) //this is affected by bias too
  Output is (angle_accelerometer)
  More information about model in my thesis
  Calculations are done in SI units. radians... in IMU frame of reference



  Change the constants if u want to use this kf for something else
*/
#include <Eigen/Dense>
#include <Eigen/Core>
#define MPU_UPDATE_TIMING 0.005 //SECONDS(minimum 1.7ms needed) Filter coeFFS depend on this constant
#define TIMING MPU_UPDATE_TIMING

using namespace Eigen;
class mkf //mini kf with matrices setup for atttitude estimation
{
public:
  //Compile time constants
  float dt = TIMING;
  Matrix<float, 2,2> A, Q;
  Matrix<float, 1,2> C;
  Matrix<float, 1,1> R;
  Matrix<float, 2,1> B;
  //Main Vars
  Matrix<float, 2,1> Xk;
  Matrix<float, 1,1> Yk1;
  Matrix<float, 2,2> Pk;
  Matrix<float, 2,1> K;
  Matrix<float, 1,1> uk;

  //Temporary vars
  Matrix<float, 2,2> Pk1;
  Matrix<float, 2,1> Xk1;
  //Functions
  mkf();
  int predict();
  int correct();
  int update();
  int getGain();
  int run(float u, float y);

} ; // attitude kf

mkf::mkf(){
  //initialize
  A<< 1, -dt, 0, 1;
  B<< dt, 0;
  C<< 1, 0;
  R<< 0.228; // Noise of angle estimation from accelero meter alone
  Q<< 0.000514 , 0, 0, 0.0001; //bias estimation is given more weightage
  Xk<<0,0;
  Yk1<<0; // mismatch can result in runtime error
  Pk = Q;
  K<<0,0;
}

int mkf::predict(){
  Xk1 = A*Xk + B*uk;
  Pk1 = A*Pk*A.transpose() + Q;
  return 0;
}
int mkf::correct(){
  Xk1 = Xk1 + K*(Yk1 - C*Xk1);
  Matrix<float,2,2> Identity;
  Identity<<1,0,0,1;
  Pk1 = (Identity - K*C)*Pk1;
  return 0;
}

int mkf::update(){
  Xk = Xk1;
  Pk = Pk1;
  return 0;
}

int mkf::getGain(){
  auto temp = ( R + C*Pk1*C.transpose() );
  K = Pk1*C.transpose()*temp.inverse();
  return 0;
}
int mkf::run(float u, float y){
  Yk1(0,0) = y;
  uk(0,0) = u;
  predict();
  getGain();
  correct();
  update();
  return 0;
}
