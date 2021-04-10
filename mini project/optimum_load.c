#include "functions.h"
#include <stdio.h>
#include <math.h>

float optimum_load(float copper_loss,float iron_loss,float rating)
{
  float opt_load,loss_div;
  loss_div=iron_loss/copper_loss;
  opt_load=(float)pow((double)loss_div,0.5);
  return opt_load;
}