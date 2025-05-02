clear all
close all
Hd = filter2;

freq=3;
t=0:0.010:1;
signal = sin(2*pi*freq*t);
plot(t,signal);

filteredDerivativeSignal = filter(Hd,signal);
hold on;
plot(t,filteredDerivativeSignal)

actualDerivative = 2*pi*freq*cos(2*pi*freq*t);
plot(t,actualDerivative,'b-')