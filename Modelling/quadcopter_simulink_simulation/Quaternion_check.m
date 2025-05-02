clear all
close all
% clc

%This code rotates a vector p = [x y z] by the quaternion q = [w vx vy vz]
%Initially all the variables have been defined as syms.
syms w vx vy vz x y z 
p = [x;y;z];

%Rotation matrix for the vector
R = [1-2*vy*vy-2*vz*vz  2*(vx*vy-vz*w)      2*(vx*vz+vy*w);...
    2*(vx*vy+vz*w)      1-2*vx*vx-2*vz*vz   2*(vy*vz-vx*w);...
    2*(vx*vz-vy*w)      2*(vy*vz+vx*w)      1-2*vx*vx-2*vy*vy];

%Here, we transform the earth z axis (reference axis), to body frame (quad frame) to
% simplify the calculations of the forces and torque on the quad.
pRot = inv(R)*p

%Quaternion corresponding to orientation of the
%gyro/quad+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
w=cos(pi/4);
vx=sin(pi/4)*1/3^0.5;
vy=sin(pi/4)*1/3^0.5;
vz=sin(pi/4)*1/3^0.5;

% Earth frame vector
x=1;
y=0;
z=0;

%Substituting the values of symbols in the rotated vector
bodyFrameVector=double(subs(pRot))

%Obtaining euler angles from quaternion 
%Not needed as of now, but just putting for reference
% phi = atan2(2*(w*vx+vy*vz),w*w-vx*vx-vy*vy+vz*vz);
% theta = asin(2*(w*vy-vz*vx));
% psi = atan2(2*(w*vz+vx*vy),w*w+vx*vx-vy*vy-vz*vz);
% 
% display(rad2deg(phi));display(rad2deg(theta));display(rad2deg(psi));