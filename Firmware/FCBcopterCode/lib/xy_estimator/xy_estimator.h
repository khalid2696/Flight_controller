#pragma once
#include "kalman.h"
#include "px4flow.h"

class xy_esti
{
public:
  mkf vx_kal;
  mkf vy_kal;
  xy_esti();
  int run(float ux,float uy, float yx, float yy);
}xy_vel;

int xy_esti::run(float ux,float uy, float yx, float yy)
{
  vx_kal.run(ux,yx);
  vy_kal.run(uy,yy);
  return 0;
}
xy_esti::xy_esti():
  vx_kal(),vy_kal()
{
  vx_kal.dt = 0.020;
  vx_kal.A<< 1, -vx_kal.dt, 0, 1;
  vx_kal.B<< vx_kal.dt, 0;
  vx_kal.C<< 1, 0;
  vx_kal.R<< 0.07;
  vx_kal.Q<< 7.84e-4 , 0, 0, 1.1e-6; //bias estimation is given more weightage
  vx_kal.Xk<<0,0;
  vx_kal.Yk1<<0; // mismatch can result in runtime error
  vx_kal.Pk <<1,0,0,1;
  vx_kal.K<<0,0;

  vy_kal.dt = 0.020;
  vy_kal.A<< 1, -vy_kal.dt, 0, 1;
  vy_kal.B<< vy_kal.dt, 0;
  vy_kal.C<< 1, 0;
  vy_kal.R<< 0.07; // Noise of angle estimation from accelero meter alone
  vy_kal.Q<< 7.84e-4 , 0, 0, 1.1e-6; //bias estimation is given more weightage
  vy_kal.Xk<<0,0;
  vy_kal.Yk1<<0; // mismatch can result in runtime error
  vy_kal.Pk <<1,0,0,1;
  vy_kal.K<<0,0;
}
