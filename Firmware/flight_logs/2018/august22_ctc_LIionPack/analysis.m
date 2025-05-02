clear all
close all
importdata

flightData  = 400:500;
plot( time_ms(flightData), imu_roll(flightData) )
mean(imu_roll(flightData))
mean(imu_pitch(flightData))
mean(Setpoint_roll(flightData))
mean(Setpoint_pitch(flightData))
figure 
plot(time_ms(flightData)/1000 , imu_roll(flightData), '.');
hold on
plot(time_ms(flightData)/1000 , Setpoint_roll(flightData));