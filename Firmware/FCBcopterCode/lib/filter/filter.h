#pragma once
//Filter library for FIR filter implementation for FCB 2.0
//written by V.M. 2018
//This doesnot use the MBED DSP api. implementations should be ported to DSP
//for high bandwidth/ speed applications

class FIRfilter
{ public:
   int Nc; //No of filter coefficients
   //int Nmax = 25; //Fixed Max order type filter. avoiding dynamic memory allocation
   float *coefficients;
   float *buffer;

   FIRfilter(int NoOfCoefs, float *filterCoefficients, float *initialBuffer ); //Initialize the Filter Coefficients and Nc
   float filter(float x); //Execute the filter
 private:
   int marker;
};

class firstOrderLP
{
public:
  float tau, Ts;
  float Multiplier=0, den_coeff=0; //2 temporary variables used in calculation. just to avoid recalculations
public:
  float F3DB, Fs;  //cutoff
  float num_buffer=0.0, den_buffer=0.0;
  firstOrderLP(float F_cutOff, float F_sampling);
  float filter(float x);

};
