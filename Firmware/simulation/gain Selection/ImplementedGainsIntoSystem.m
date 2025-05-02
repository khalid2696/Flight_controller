clear all
close all

L = 0.225;
Ixx = 3.96*10^-3;
tau = 0.5;
Mass = 0.8;
Tmax = 0.75*9.81;

Csys = 2*L*Tmax/Ixx;

kp = 0.008;
ki = 1*kp;
kd = kp/20;
cLoop = getTf( kp,ki,kd,tau,Csys );
pole(cLoop)
hold off
pzmap(cLoop);

%Now lets check the margins to get some insight. 
%Siddhartha suggested a phase margin of 60 deg in continuous linear model
openLoopTf = cLoop/(1-cLoop);
[Gm,Pm,Wgm,Wpm] = margin(openLoopTf)
%step(cLoop)
bode(cLoop)
disp('max Ki allowed');
ki_max = kp*(1+Csys*kd)/tau;
disp(ki_max/kp);