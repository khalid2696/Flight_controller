#ifndef STATES_H
#define STATES_H

//Central location for all the states used in simulation
#include "Eigen/Dense"

using namespace Eigen;
class FLIGHT_STATES
{
public:
    Vector3d omega;//Body angular rates in body frame [p,q,r]
    Vector4d quat; //representing body frame orientation wrt gnd frame
    Vector3d vel;  //SI Velocity in gnd frame- NED
    Vector3d pos;  //SI Pos in Gnd frame - NED
    Vector3d RcDotDot;
    Vector3d omegaDot; //Required for explicit way of solving implicit equation, Derive more accurate explicit equations
    Vector4d motorSpeeds; //using rad/s

    FLIGHT_STATES():omega(0.0,0.0,0.0),quat(0.0,0.0,0.0,0.0),vel(0.0,0.0,0.0),pos(0.0,0.0,0.0)
    {    }
} states;





#endif // STATES_H
