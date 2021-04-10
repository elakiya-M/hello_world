#include<stdio.h>
#include<assert.h>
#include<string.h>
#include "functions.h"

int calculation;
int i,j;

typedef struct Transformer
{
    float rating;
    float copper_loss,iron_loss,cost_per_unit;
    float load_info[3][3];
}transformer; 

enum calculate{OPTIMAL_LOAD=1,OUTPUT_ENERGY,COPPER_LOSS_KWH,IRON_LOSS_KWH,OPERATIONAL_COST};
int main()
{
    
    printf("\n***Transformer calculations***\n");
    printf("1.Optimal load\n2.Output energy\n3.Copper loss(in KWh)\n4.Iron loss(in KWh)\n5.Operational Cost\n");
    printf("Enter your choice\n");
    scanf("%d",&calculation);
    if((calculation>=OPTIMAL_LOAD)&&(calculation<=OPERATIONAL_COST)!=1)
    printf("Wrong choice\n please Enter valid choice\n");
 
    float a[3][3] = {1.0,0.8,2000.0,1.0/3,0.8,3000.0};
    float load,output_energy=0,copper_loss_energy=0,iron_loss_energy,operational_cost;
    transformer t1;
    transformer *t =&t1;
    
    t1.rating=125.0;
    t1.copper_loss=1.5;
    t1.iron_loss=1.0;
    t1.load_info[3][3];
    assert(sizeof(a)==sizeof(t1.load_info));
    memcpy(t1.load_info,a,sizeof(a));
    t1.cost_per_unit=3.5;
    
    for(i=0;i<3;i++)
    {for(j=0;j<1;j++)
    {
    output_energy+=energy_output(t->rating,t->load_info[i][j],t->load_info[i][j+1],t->load_info[i][j+2]);
    copper_loss_energy+=energy_copper(t->load_info[i][j],t->copper_loss,t->load_info[i][j+2]);
    }}
    load=optimum_load(t->copper_loss,t->iron_loss,t->rating);
    iron_loss_energy=energy_iron(t->iron_loss);
    operational_cost=cost(output_energy,copper_loss_energy,iron_loss_energy,t1.cost_per_unit);

    
    switch (calculation)
    {
    case OPTIMAL_LOAD:
        printf("optimal load = %.2f\n",load);
        break;
    case OUTPUT_ENERGY:
        printf("output energy = %.2f\n",output_energy);
        break;
    case COPPER_LOSS_KWH:
        printf("copper loss in KWh = %.2f\n",copper_loss_energy);
        break;
    case IRON_LOSS_KWH:
        printf("iron loss in KWh = %.2f\n",iron_loss_energy);
        break;
    case OPERATIONAL_COST:
        printf("operational cost = %.2f\n",operational_cost);
        break;
    default:
        break;
    }
}
    

