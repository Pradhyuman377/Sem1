// WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y .
#include<stdio.h>
void exchanger(int,int);
void main()
{
    int x,y;
    printf("enter the number");
    scanf("%d%d",&x,&y);
    exchanger(x,y);
}

void exchanger(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swamping a and b are %d and %d",a,b);
}