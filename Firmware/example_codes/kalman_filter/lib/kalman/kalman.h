#pragma once
#include <Eigen/Dense>
#include <Eigen/Core>
const float dt = 0.004;

using namespace Eigen;
class mkf //mini kf with matrices setup for atttitude estimation
{
public:
  //Compile time constants
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

} att_kf; // attitude kf

mkf::mkf(){
  //initialize
  A<< 1, -dt, 0, 1;
  B<< dt, 0;
  C<< 1, 0;
  R<< 0.0228; // Noise of angle estimation from accelero meter alone
  Q<< 0.001114 , 0, 0, 1.538e-4; //bias estimation is given more weightage
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
