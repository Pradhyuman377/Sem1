//WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE.
#include<stdio.h>
int fun(int);
void main()
{
    int x,y;
    printf("enter the number");
    scanf("%d",&x);
    y=fun(x);
    printf("returned value is %d",y);
}

int fun(int a)
 { 
if(a%2==0)
   return(1);
else
   return(0);
 }