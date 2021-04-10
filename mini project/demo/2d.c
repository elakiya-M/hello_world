#include<stdio.h>
#include<assert.h>
#include<string.h>
typedef struct Transformer
{
    float rating;
    float copper_loss,iron_loss,cost_per_unit;
    float load_info[3][3];
    //int a[3][3];
}transformer; 
int main()
{
int i,j;
transformer t1;
float a[3][3] = {1.0,0.8,2000.0,1.0,0.8,3000.0};
assert(sizeof(a)==sizeof(t1.load_info));
memcpy(t1.load_info,a,sizeof(a));
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{
    printf("%f ",t1.load_info[i][j]);
}}
}
