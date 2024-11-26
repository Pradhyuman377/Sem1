//Write a program in C to rotate an array by N positions.
#include<stdio.h>
void main()
{
    int n,i,k,temp,j,l;
    printf("enter number charcter of array");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter charcter");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number of rotation");
    scanf("%d",&k);
    for(l=1;l<=k;l++)
    {
  for(i=1;i<n-1;i++)
  {
     b[0]=a[n-1];
     b[i+1]=a[i];
     b[1]=a[0];
  }
    }
  for(i=0;i<n;i++)
  {
    printf(" %d ",b[i]);
  }
}