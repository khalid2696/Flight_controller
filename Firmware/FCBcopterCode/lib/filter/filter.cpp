#include "filter.h"

FIRfilter::FIRfilter(int NoOfCoefs, float *filterCoefficients, float *initialBuffer ) //pass the array of coefficients
{
  Nc = NoOfCoefs;
  coefficients = filterCoefficients; //get the address of the external array with coeffs
  buffer = initialBuffer; //mostly 0,..0,..0..
  marker = 0;
}

float FIRfilter::filter(float x)
{
  //Filter mark 2 (cyclic buffer)
  float output = 0.0;
  buffer[marker] = x;
  for(int i = 0; i<Nc; i++)
  { if(marker-i>-1)  output += buffer[marker-i]*coefficients[i];
    else output += buffer[marker-i+Nc]*coefficients[i];
  }
  marker++;
  if(marker ==Nc)marker= 0;
  return output;
}

// float FIRfilter::filter(float x)
// {
//   float output = 0.0;
//   for(int i = Nc-1; i>0; i--)
//   {
//     buffer[i] = buffer[i-1];
//   }
//   buffer[1] = x;
//   for(int i = 0; i<Nc; i++)
//   {
//     output += buffer[i]*coefficients[i];
//   }
//   return output;
// }

firstOrderLP::firstOrderLP(float F_cutOff, float F_sampling)
{
    F3DB = F_cutOff;
    Fs = F_sampling;
    tau = 1.0/2.0/3.14159/F3DB;
    Ts = 1.0/Fs;
    Multiplier = 1.0 / (1.0+2.0*tau/Ts);
    den_coeff = (1-2.0*tau/Ts) / (1+2.0*tau/Ts);

}

float firstOrderLP::filter(float x)
{
  float output = Multiplier*(x+num_buffer) - den_coeff*den_buffer;
  num_buffer = x;
  den_buffer = output;
  return output;
}
