//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.
#include<stdio.h>
void main()
{
    int a[5],n,i,k;
    printf("enter elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number which you have to search");
    scanf("%d",&n);
    k=n;
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        {
        printf("number is in a[%d]",i);
        k=n+1;
        }
    } 
    if(k==n)
    printf("entered number is not in matrix");
}