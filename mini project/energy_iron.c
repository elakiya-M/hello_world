#include "functions.h"
#include <stdio.h>

float energy_iron(float iron_loss)
{
    float iron_energy;
    iron_energy=iron_loss*24*365;
    return iron_energy;
}