
%Debugging the 2Hz jumps
close all

%if sensor has 2Hz jumps then quadcopter also will have 2Hz jums in
%altitude mode

% acc = c6;
% height = c17;
% vel = c18;
% time = c1;
% plot(time/1000,acc,'.')
% figure
% plot(time/1000,height,'.')
% figure
% plot(time/1000,vel,'.')

%Vel estimate from acc
% close all
% velA = cumsum(acc/1000*9.81-9.81)*0.050;
% plot(velA)
% hold on
% plot(vel/1000)
% plot(diff(height)/1000/0.050)

%px4flow. Terrible noise levels
vx = c27;
vy = c28;
time = c1;
plot(time/1000, vx/1000)
hold on
plot(time/1000, vy/1000)


