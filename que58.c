//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSEARRAYS INTO THIRD.
#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],i,j;
    printf("enter the numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
        for(j=0;j<=2;j++)
        {
            c[j]=a[j] + b[j];
            printf("\n%d",c[j]);
        }
}