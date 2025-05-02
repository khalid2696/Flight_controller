function quad_norm = QuaternionToQuadnormal(w,vx,vy,vz)
% syms w vx vy vz x y z 

%Quaternion corresponding to orientation of the gyro/quad
% w=cos(pi/4);
% vx=0;
% vy=1;
% vz=0;

R = [1-2*vy*vy-2*vz*vz  2*(vx*vy-vz*w)      2*(vx*vz+vy*w);...
    2*(vx*vy+vz*w)      1-2*vx*vx-2*vz*vz   2*(vy*vz-vx*w);...
    2*(vx*vz-vy*w)      2*(vy*vz+vx*w)      1-2*vx*vx-2*vy*vy];

% Earth frame vector
x=0;
y=0;
z=1;

earthvector = [x;y;z];
% quatvector = [vx vy vz];

quad_norm = R*earthvector;

%Obtaining euler angles from quaternion 
%Not needed as of now, but just putting for reference
% phi = atan2(2*(w*vx+vy*vz),w*w-vx*vx-vy*vy+vz*vz);
% theta = asin(2*(w*vy-vz*vx));
% psi = atan2(2*(w*vz+vx*vy),w*w+vx*vx-vy*vy-vz*vz);
% 
% display(rad2deg(phi));display(rad2deg(theta));display(rad2deg(psi));