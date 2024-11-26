//PROGRAM TO REVERSE AN ARRAY.
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the number of array you want");
    scanf("%d",&n);
    int a[n];
    printf("enter those values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=n-1;j>=0;j--)
    {
      printf("\n%d = a[%d]",a[j],j);
 
    }
}