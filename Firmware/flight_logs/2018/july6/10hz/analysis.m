close all
importCode2
plot(time,pitch,'DisplayName','compleFilter onboard')
hold on;
%plot(time,roll)
%plot(time,gy)
%lets try our low speed complementary filter with the collected data
%% ACC ANGLE
pitchAcc = zeros(length(ax),1);
for i = 1: length(ax)
    pitchAcc(i) = atan2(ax(i),az(i));
end
plot(time, pitchAcc,'DisplayName','accelerometer');

%% GYRO ANGLE
pitchGyro = zeros(length(time),1);
pitchGyro(1)  =0;
for i = 1:length(gy)-1
pitchGyro(i+1) = pitchGyro(i) + gy(i+1)*0.1;
end

plot(time, pitchGyro,'DisplayName','Gyro integrated');
%% COMPLE FILTER
pitchCf = zeros(length(time),1);
for i =  1:length(time)-1
   pitchCf(i+1) = 0.98*(pitchCf(i) + gy(i+1)*0.1) +0.02*pitchAcc(i+1);
end

plot(time,pitchCf,'DisplayName','offboard low rate cf');
legend('compleFilter onboard','accelerometer','Gyro integrated','offboard low rate cf')