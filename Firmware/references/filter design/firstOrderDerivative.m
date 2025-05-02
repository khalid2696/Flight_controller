%TF used is given in simulink tool box - discrete pid controller.
clear all;
close all;
Ts = 1/100;
N = 20; %Approximately the hz level
tau = (1-Ts*N/2)/N;

filterTf = tf([1],[tau,1]);

opts = bodeoptions;
opts.FreqUnits = 'Hz';
opts.FreqScale = 'linear';
opts.MagScale = 'linear';
opts.MagUnits = 'abs';
%bode(filterTf, opts);

%for the whole derivative action
derivativeTf = tf([1 0],[tau,1]);
bode(derivativeTf, opts);
hold on 
bode(tf([1 0],[1]),opts);
%bode(derivativeTf)