% code to help in gain selection
L = 0.225;
Ixx = 3.96*10^-3;
tau = 0.5;
Mass = 0.8;
Tmax = 0.75*9.81;

Csys = 2*L*Tmax/Ixx;
%put some gains
kp = 1;
kd = 1;

disp('max Ki allowed');
ki_max = kp*(1+Csys*kd)/tau;
disp(ki_max);

%Lets Pick a Ki
ki = ki_max/10;

%Plot the poles of the resultant system
%% THIS TF IS SLIGHTLY INCORRECT.!!!
num = Csys *[kd kp ki];
den = [tau, (1+Csys*kd), Csys*kp, Csys*ki];
cLoop = tf(num,den);
pole(cLoop)
pzmap(cLoop)


%% one of the poles is very far away. We can put peace on it
%put some gains
kp = 5;
kd = 1;
ki = 1;

disp('max Ki allowed');
ki_max = kp*(1+Csys*kd)/tau;
disp(ki_max);
disp('minimum pole x distance from origin for settling time =0.5s');
disp(-3.912/0.5);

%Plot the poles of the resultant system
num = Csys *[kd kp ki];
den = [tau, (1+Csys*kd), Csys*kp, Csys*ki];
cLoop = tf(num,den);
pole(cLoop)
pzmap(cLoop)

%handling the code this way is Pain max. We need to go smart

%% DEPRECATED