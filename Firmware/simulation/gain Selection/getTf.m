function cLoop = getTf( kp,ki,kd,tau,Csys )
%GETTF gets the see saw tranfer function closed loop
%   Detailed explanation goes here
% Mistakes in Tf rectified
num = Csys *[kp ki];
den = [tau, (1+Csys*kd), Csys*kp, Csys*ki];
cLoop = tf(num,den);


end

