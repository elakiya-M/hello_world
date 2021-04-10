#include "functions.h"
#include <stdio.h>

float energy_copper(float load_type,float copper_loss,float hours_of_operation)
{
    float copper_energy;
    copper_energy=load_type*load_type*copper_loss*hours_of_operation;
    return copper_energy;
}