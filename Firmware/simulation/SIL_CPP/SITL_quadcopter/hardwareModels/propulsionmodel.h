#ifndef PROPULSIONMODEL_H
#define PROPULSIONMODEL_H

#include <math.h> //for pi

//MOTOR
class MOTOR
{
    //An equivalent DC motor model is assumed for BLDC motor that we use.
    //Note that Shaft is assumed to be a property of motor :) cannot be done!!
public:
    //PARAMS
    float k_v;
    float k_tau;
    float R;
    //float I_rotor;

    //STATES
    //float omega; //SI units

    //Functions
    MOTOR(float kv_,float R_);
        //KV in regular unit (eg-850kv), R in ohms, I in SI units
    float getTorque(float voltage,float omega);

};

MOTOR::MOTOR(float kv_,float R_){
    R = R_;
    k_v = kv;
    k_tau =1.0/(kv*2.0*3.14159/60.0);

}

MOTOR::getTorque(float voltage,float omega ){
    float kv_si = (k_v*2.0*3.14159/60.0);
    float current = (voltage-omega/kv_si) / R;
    //Assuming that there is no limit on this current(That rests with the esc's model)
    float torq = k_tau * current ;

    return torq;
}

//ESC
class ESC
{
    //ESC is a highly complicated closed loop control system
    //We frankly dont know anything about ESC.
    //It can limit current, can have its own filtering and lags, may act non-linearly
    //Low battery case can be handled differently
    //The model below is the simplest representation of ESC
public:
    float getOutputVoltage(float throttle, float BV) //gets rms output voltage from ESC(to motor assuming dc equivalent)
    {
        if(throttle>1.0) throttle = 1.0;
        else if(throttle<0.0) throttle = 0.0;

        return throttle*BV;
    }
};

//BATTERY
class BATTERY
{
    //Only the simplest model(constant voltage model ) is considered for the battery here
public:
    //Params
    float mAh;
    float No_of_cells;
    float V_nominal;
    float V_max;
    float V_min;//minimum acceptable

    //state
    float V_present;

    BATTERY(float voltage) {V_present = voltage;}
    float getVoltage(){
        return V_present;
    }

};

class SHAFT
{
public:
    //Params
    float I_rotor;

    //State
    float omega;

    SHAFT(float Irotor): I_rotor(Irotor){} //initializer

    int updateOmega(float torq, float dt){
        float omega_dot = torq / I_rotor; //net torq please!!
        omega += omega_dot*dt;
        return 0;
    }

};

class PROPELLER
{
    //I am gonna a use steady state simplest model for propeller
    //to reduce the complexity for now.
    //It makes sense to neglect the aerodynamic lag since the motor lag is more than propellers lag
    float rho = 1.16; //Temperature of 30deg is assumed here. Chennai
    float dia = 10.0*0.0254 ;  //SI
    float pitch = 4.7*0.0254; //SI units plz
    float CT = 0.1;
    float CP = 0.04; //just random numbers for now. refer UIUC prop database

    PROPELLER(float d,float p, float ct, float cp):dia(d),pitch(p),CT(ct),CP(cp) {}

    float getThrust(){
          return rho * pow(omega/(2.0*M_PI), 2) * pow(dia, 4) *CT;
        }
    int getTorq(){
          return rho * pow(omega/(2.0*M_PI), 2) * pow(dia, 5) *(CP/(2.0*M_PI));
        }
};

class PropulsionUnit
{
    MOTOR motor;
    PROPELLER propeller;
    SHAFT shaft;
    ESC esc;

}
//TO BE CONTINUED



#endif // PROPULSIONMODEL_H
