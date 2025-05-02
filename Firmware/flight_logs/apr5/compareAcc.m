
%load flight 1 data
clear all
importy
acc2 = c6/1000*9.81-9.81;
time2 = c1/1000;
load new
plot(time2,acc2)
hold on
plot(time/1000,acc/1000*9.81-9.81)