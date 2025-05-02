//All the quadcopter model params are in this file only
#include "SIM_parameters.h"
#include "Eigen/Dense"
#include "hardwareModels/simplepropulsionmodel.h"
#include "Eigen/Geometry"

using namespace Eigen;
//Note: functions with New middle name predict the future!!

class QUADCOPTER_SIMULATION
{
public:
    float mass;
    Matrix3d I_matrix;
    Vector3d rcg; //offset between reference point and center of gravity(constant!)

    Matrix3d getCbi(Vector4d quat);
    Vector3d getOmegaDot(); //gives pqr in body frame
    Vector3d getVelDot(); //gives [v1,v2,v3]' in gnd frame NED
    Vector3d getNewOmega(Vector3d omegaDot, Vector3d Omega,float dt); //SI-gives omega in body frame using euler integration
    Vector3d getNewVel(Vector3d acc, Vector3d vel,float dt); //gives velocity in gnd frame
    Vector3d getNewPos(Vector3d vel, Vector3d pos,float dt); //Euler integration to get Position in gnd frame
    Vector4d getNewQuaternion(Vector3d omega, Vector4d quat,float dt); //Euler Integration to get final normalized quaternion
    Vector3d quaternionToEuler(Vector4d quat); //degrees- gets euler angles in 3-2-1 Aero convention in [yaw, pitch, roll] vector3d


};

Vector3d QUADCOPTER_SIMULATION::getNewOmega(Vector3d omegaDot, Vector3d omega,float dt)
{
    return omegaDot*dt + omega;
}

Vector3d QUADCOPTER_SIMULATION::getNewVel(Vector3d acc, Vector3d vel,float dt)
{
    return acc*dt + vel;
}

Vector3d QUADCOPTER_SIMULATION::getNewPos(Vector3d vel, Vector3d pos,float dt)
{
    return vel*dt + pos;
}

Vector4d QUADCOPTER_SIMULATION::getNewQuaternion(Vector3d omega, Vector4d quat,float dt)
{
    matrix4d Q_mat;
    Vector4d W(0,omega(0),omega(1),omega(2) );
    Q_mat<< quat(0), -quat(1), -quat(2), -quat(3),
            quat(1), quat(0), -quat(3), quat(2),
            quat(2), quat(3), quat(0), -quat(1),
            quat(3), -quat(2), quat(1), quat(0) ;
    Vector4d quatDot = 0.5*Q_mat*W;

    Vector4d quat_new = quat + quatDot*dt;
    quat_new.normalize();

    return quat_new;
}
Vector3d QUADCOPTER_SIMULATION::quaternionToEuler(Vector4d quat)
{
    /*This code is taken from a wikipedia quaternion to euler angle computation article(y-p-r) or 3-2-1 or z-y-x
        or Aerospace regular euler angles or Tail Bryan Angle.
        */
    float dqw = quat(0);
    float dqx = quat(1);
    float dqy = quat(2);
    float dqz = quat(3);

    double sinr = +2.0 * (dqw * dqx + dqy * dqz);
    double cosr = +1.0 - 2.0 * (dqx * dqx + dqy * dqy);
    roll = atan2(sinr, cosr);

    // pitch (y-axis rotation)
    double sinp = +2.0 * (dqw * dqy - dqz * dqx);
    if (fabs(sinp) >= 1)
        pitch = copysign(M_PI / 2, sinp); // use 90 degrees if out of range
    else
        pitch = asin(sinp);

    // yaw (z-axis rotation)
    double siny = +2.0 * (dqw * dqz + dqx * dqy);
    double cosy = +1.0 - 2.0 * (dqy * dqy + dqz * dqz);
    yaw = atan2(siny, cosy);

        yaw *= (180.0 / PI);
        pitch *= (180.0 / PI);
        roll *= (180.0 / PI); //To degrees

    Vector3d ypr;
    ypr<<yaw, pitch, roll;
    return ypr; //ypr in degrees(Assuming that GND frame is NED and 3-2-1 convention is followed)
}

Vector3d QUADCOPTER_SIMULATION::getOmegaDot(Vector3d netTorq, Vector3d omega, Vector3d RcDotDot)
{
    //The effect of angular momentum due to the rotors spinning is found to be zero mathematically
    /*Included effects are
    * CG offset
    * Inertia matrix and gyroscopic effect due to the quad as a whole (wIw term)
    */
    //RcDotDot stands for acceleration of reference point wrt gnd frame coordinates

    return I_matrix.inverse()*(netTorq - omega.cross(I_matrix*omega) -rcg.cross(Cbi*RcDotDot)*mass );


}

Vector3d QUADCOPTER_SIMULATION::getVelDot(Vector3d netForce, Vector3d omegaDot, Vector3d omega, Matrix3d Cbi)
{
Vector3d rcDotDot = Cbi.inverse()*(netForce/mass -omegaDot.cross(rcg) - omega.cross(omega.cross(rcg)));
return rcDotDot;
//Ideally we should convert the implicit formulation between rc dot dot and ang acceleration. But I put peace
//And evoving even acceleration as state;

}
