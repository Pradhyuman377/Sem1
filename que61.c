//PROGRAM TO SORT (SELECTION SORT) AN ARRAY.
#include<stdio.h>
void main()
{
    int a[5],i,j,min=1000,temp;
    printf("enter numbers");
    for(i=0;i<5;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    a[0]==min;
    for(i=1;i<4;i++)
    {
        if(a[i+1]<a[i])
        {
        
    }
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}