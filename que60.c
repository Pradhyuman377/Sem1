//PROGRAM TO SORT ( bubble SORT) AN ARRAY.
#include<stdio.h>
void main()
{
    int a[5],i,j;
    printf("enter number of arrays");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<=3;j++)
    {
        if(a[j]>a[j+1])
        {
        a[j+1]=a[j];
        }
    printf("\n%d",a[j]);
    }
}