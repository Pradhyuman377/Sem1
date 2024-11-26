// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRYS
#include<stdio.h>
void main()
{
    int a[3],b[3],i,c[3],j;
    printf("enter number of arryas respectively");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    for(j=0;j<=2;j++)
    {
       c[j]=a[j];
       a[j]=b[j];
       b[j]=c[j];
       printf("\n%d",a[j]);
       printf("\n%d",b[j]);
    }
}