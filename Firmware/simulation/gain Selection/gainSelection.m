% code to help in gain selection
L = 0.225;
Ixx = 3.96*10^-3;
tau = 0.5;
Mass = 0.8;
Tmax = 0.75*9.81;

Csys = 2*L*Tmax/Ixx;

kp = 10;
kd = 0.1;
ki = 1;

disp('max Ki allowed');
ki_max = kp*(1+Csys*kd)/tau;
disp(ki_max);
disp('minimum pole x distance from origin for settling time =0.5s');
disp(-3.912/0.5);

% %Plot the poles of the resultant system
% cLoop = getTf( kp,ki,kd,tau,Csys );
% pole(cLoop)
% pzmap(cLoop)
% 
% for kp = 0:0.1:1
%     cLoop = getTf( kp,ki,kd,tau,Csys );
%     pzmap(cLoop);hold on;
%     disp(kp);
%     pause(1);
% end

%Around kp = 0.6 we are getting a pole on real line
kp = 0.63;
kd = 0.1;
ki = 0.1;
cLoop = getTf( kp,ki,kd,tau,Csys );
pole(cLoop)
pzmap(cLoop);hold on;

%% Pole Placement
Settling_time = 1;
p1 = -3.912/Settling_time; %for damping ratio of 1
p2 = p1;
p3 = p1*3; %random

%let p,q,r be the roots of CE for the above poles
p = -(p1+p2+p3);
q = p1*p2+p2*p3+p3*p1;
r = -p1*p2*p3;
kd = (tau*p-1)/Csys
ki = tau*r/Csys
kp = tau*q/Csys
cLoop = getTf( kp,ki,kd,tau,Csys );
pole(cLoop)
hold off
pzmap(cLoop);
figure
step(cLoop);
% 
% %% Finalising the gains
% kp = 0.01;
% ki = 0.013;
% kd = 0.005;
% cLoop = getTf( kp,ki,kd,tau,Csys );
% pole(cLoop)
% hold off
% pzmap(cLoop);

%Lets select gains based on siddhartha's suggestion
% kp = 0.002;
% ki = 4*kp;
% kd = kp/20.0;
% cLoop = getTf( kp,ki,kd,tau,Csys );
% pole(cLoop)
% hold off
% pzmap(cLoop);
% 
% %Now lets check the margins to get some insight. 
% %Siddhartha suggested a phase margin of 60 deg in continuous linear model
% openLoopTf = cLoop/(1-cLoop);
% [Gm,Pm,Wgm,Wpm] = margin(openLoopTf)
