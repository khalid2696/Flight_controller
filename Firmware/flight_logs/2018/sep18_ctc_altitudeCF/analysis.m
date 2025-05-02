%analysis script
close all
clear all
untitled4

% time_ms = time_ms(200:end);
% heightRate = heightRate(200:end);
% height = height(200:end); 
plot(Setpoint_heightRate);
hold on
plot(height_PID_output)
plot(heightRate)
