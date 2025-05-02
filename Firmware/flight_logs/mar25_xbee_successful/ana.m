
%importData

% plot(c1,c31*5); %plot quality
% hold on
% plot(c1,c17);
% 
% plot(c1/10^3,-c7/1000);%gx
% hold on
% plot(c1/10^3,c26*180/pi/1000)
% plot(c1/10^3,c30*180/pi/1000)
% legend('gx','compensated','no_comp')


% plot(c1(1:1000)/10^3,-c8(1:1000)/1000);%gx
% hold on
% plot(c1(1:1000)/10^3,c25(1:1000)*180/pi/1000)
% plot(c1(1:1000)/10^3,c29(1:1000)*180/pi/1000)
% legend('gx','compensated','no_comp')
lmt = 800
plot(c1(1:lmt)/10^3,c27(1:lmt)/1000);
hold on
plot(c1(1:lmt)/10^3,c28(1:lmt)/1000)
legend('Vx','Vy')