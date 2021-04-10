#include<stdio.h>
#include "fun.h"
void main()
{
    int a,b,mode;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf ("Press 1 to perform addition\n Press 2 to perform subtraction\n Press 3 to perform multiplication\n Press 4 to perform division");
    scanf("%d",&mode);
    if(mode==1)
    printf("%d",add(a,b));
    else if(mode==2)
    printf("%d",sub(a,b));
    else if(mode==3)
    printf("%d",mul(a,b));
    else if(mode==4)
    printf("%d",div(a,b));
    else
    printf("enter valid number to perform specific operation");
    
}
