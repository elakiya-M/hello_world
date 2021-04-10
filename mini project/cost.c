#include "functions.h"
#include <stdio.h>

float cost(float output_energy,float copper_loss_energy,float iron_loss_energy,float cost_per_unit)
{
    float total_cost;
    total_cost=(output_energy+copper_loss_energy+iron_loss_energy)*cost_per_unit;
    return total_cost;
}