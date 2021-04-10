#include "functions.h"
#include <stdio.h>

float energy_output(float rating,float load_type,float pf,float hours_of_operation)
{
    float output_energy;
    output_energy=rating*load_type*pf*hours_of_operation;
    return output_energy;
}
