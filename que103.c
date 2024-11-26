#include<stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
void main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=max(a,b);
    printf("max amoung these is %d",c);
}