%This code is used to simulate the indigenious Quad Stabiization algorithm
%using Quaternions

%Please follow only SI units

close all;
clear all;

%%
%initial values and simulation setings
theta = 10*pi/180; % in radian
thetaDerivative=0;
thetaIntegral=0;
axis = [0 0 1]; % in body frame unit vector
axis=axis/norm(axis);
totTime=10;
dt=0.01;

kp=20;    %in terms of pulse widths-- directly use on the Arduino
ki=20;
kd=0.9;
fmean=0;    

%data
kTau=1.63;   %Propeller 10_* 4.7_
l=0.23;    %length of half arm in m
pul_force=1.22061*9.8/1000; %newton/pulsewidth(micro sec)

%%
%Storage Variables
thetaSTR=zeros(1,totTime/dt);
thetaDerivativeSTR=zeros(1,totTime/dt);
axisSTR=zeros(totTime/dt,3);
torqueSTR=zeros(1,totTime/dt);
inertiaSTR=zeros(1,totTime/dt);
%%
%Thrust function
T1=@(theta,thetaDerivative,thetaIntegral) fmean-(kp*theta+kd*thetaDerivative+ki*thetaIntegral)/4*(-axis(3)/kTau+axis(2)/(l)-axis(1)/(l));
T2=@(theta,thetaDerivative,thetaIntegral) fmean-(kp*theta+kd*thetaDerivative+ki*thetaIntegral)/4*(-axis(3)/kTau-axis(2)/(l)+axis(1)/(l));
T3=@(theta,thetaDerivative,thetaIntegral) fmean-(kp*theta+kd*thetaDerivative+ki*thetaIntegral)/4*(+axis(3)/kTau+axis(2)/(l)+axis(1)/(l));
T4=@(theta,thetaDerivative,thetaIntegral) fmean-(kp*theta+kd*thetaDerivative+ki*thetaIntegral)/4*(+axis(3)/kTau-axis(2)/(l)-axis(1)/(l));

%Moment of inertia calculation about the "axis" vector axis
motorMass=0.1;    %one motor mass
armMass=0.07;      %there are 4 arms in a quad. write one arm mass here
inertia=@() (   (4*motorMass*l^2+2*armMass*l^2/3)-( motorMass*dot([l l 0]/2^0.5,axis)^2/norm(axis)^2 +...
    motorMass*dot([l -l 0]/2^0.5,axis)^2/norm(axis)^2 + motorMass*dot([-l -l 0]/2^0.5,axis)^2/norm(axis)^2 +...
    motorMass*dot([-l l 0]/2^0.5,axis)^2/norm(axis)^2 ) - (armMass/3*dot([l l 0]/2^0.5,axis)^2/norm(axis)^2 +...
    armMass/3*dot([l -l 0]/2^0.5,axis)^2/norm(axis)^2 + armMass/3*dot([-l -l 0]/2^0.5,axis)^2/norm(axis)^2 +...
    armMass/3*dot([-l l 0]/2^0.5,axis)^2/norm(axis)^2)   );%l is not one

%Torque Calculation
torque=@(t1,t2,t3,t4) [(-t1+t2+t3-t4)*l,(t1-t2+t3-t4)*l,(-t1-t2+t3+t4)*kTau];

%%
for i = 1:totTime/dt %loop to calculate theta matrix
    
    theta=theta+thetaDerivative*dt;
    thetaIntegral=thetaIntegral+theta*dt;
    thetaDerivative=thetaDerivative+dot(torque(T1(theta,thetaDerivative,thetaIntegral),T2(theta,thetaDerivative,thetaIntegral)...
        ,T3(theta,thetaDerivative,thetaIntegral),T4(theta,thetaDerivative,thetaIntegral) ),axis  )/inertia()*dt;
    thetaSTR(i)=theta;
    thetaDerivativeSTR(i)=thetaDerivative;
    inertiaSTR(i)=inertia();
    torqueSTR(i)=dot(torque( T1(theta,thetaDerivative,thetaIntegral),T2(theta,thetaDerivative,thetaIntegral)...
        ,T3(theta,thetaDerivative,thetaIntegral),T4(theta,thetaDerivative,thetaIntegral) ),[1 0 0]);
end

grid on;
grid minor;
hold on;
x=1:(totTime/dt);
plot(x*dt,180/pi*thetaSTR(1,:),'red');
hold on;
% plot(x*dt,180/pi*torqueSTR(1,:),'blue');




