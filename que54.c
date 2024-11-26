//PROGRAM TO RED AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.
#include<stdio.h>
void main()
{
    int a[10],sum=0;
    printf("enter 10 numbers");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
}

