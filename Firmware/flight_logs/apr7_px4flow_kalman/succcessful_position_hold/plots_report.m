% plot(time, sgx)
% hold on
% plot(time, gx)
% title('Comparison between setpoint and achieved angular velocity')
% xlabel('time s')
% ylabel('Angular velocity deg/s')
% legend('X axis Setpoint', 'X axis gyro reading')

% plot(time, spitch)
% hold on
% plot(time, pitch)
% title('Comparison between setpoint and achieved pitch angle')
% xlabel('time s')
% ylabel('Pitch angle deg')
% legend('pitch Setpoint', 'measured pitch angle')

% plot(time, svz)
% hold on
% plot(time, vz)
% title('Regulation accuracy for Vz controller')
% xlabel('time s')
% ylabel('vertical velocity m/s')
% legend('velocity Setpoint', 'measured Vz')

% plot(time, svz)
% hold on
% plot(time, vz)
% title('Regulation accuracy for Vz controller')
% xlabel('time s')
% ylabel('vertical velocity m/s')
% legend('velocity Setpoint', 'measured Vz')
% 
% plot(time, sgy)
% hold on
% plot(time, gy)
% title('Comparison between setpoint and achieved angular velocity')
% xlabel('time s')
% ylabel('Angular velocity deg/s')
% legend('Y axis Setpoint', 'Y axis gyro reading')


% plot(time, sgz)
% hold on
% plot(time, gz)
% title('Comparison between setpoint and achieved angular velocity')
% xlabel('time s')
% ylabel('Angular velocity deg/s')
% legend('Z axis Setpoint', 'Z axis gyro reading')
% 
% plot(time, 0.*time)
% hold on
% plot(time, vx)
% title('Regulation accuracy for Vx controller')
% xlabel('time s')
% ylabel('velocity m/s')
% legend('X velocity Setpoint', 'measured Vx wrt body')

% plot(time, 0.*time)
% hold on
% plot(time, vy)
% title('Regulation accuracy for Vy controller')
% xlabel('time s')
% ylabel('velocity m/s')
% legend('Y velocity Setpoint', 'measured Vy wrt body')

plot(time, m1)
hold on
plot(time, m2)
plot(time, m3)
plot(time, m4)
title('commands given to ESCs in Flight')
xlabel('time s')
ylabel('Pulse width \mu s')
legend('1','2','3','4')

