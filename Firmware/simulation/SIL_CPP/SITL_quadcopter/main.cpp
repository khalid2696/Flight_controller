#include <hardwareModels/hardware.h>
#include <iostream>
#include "SIM_parameters.h"

float time = 0.0 ; //current Simulation Time in seconds
float last_attitude_cnt_time = 0.0;
float last_rate_cnt_time = 0.0;

int main()
{

while(1){

    // This code is just the schedular part of simulation. It calls the simulation code and the control
    //loops.
    //every main loop corresponds to one SIM_DT
    if(time - last_attitude_cnt_time >= ATTITUDE_CNT_DT)
    {
        run_attitude_controller();
    }
    if(time - last_rate_cnt_time >= RATE_CNT_DT)
    {
        run_rate_controller();
    }

    run_predictor();
    log_data();
    time += SIM_DT;
}
}


