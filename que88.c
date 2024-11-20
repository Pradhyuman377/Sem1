//WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
#include<stdio.h>
void main()
{
    int n,i;
    int *j;
    printf("enter no of charcter in array");
    scanf("%d",&n);
    int a[n],b[n];
    printf("\nenter charcter of array one by one");
    for(i=0;i<n;i++)
    {
      printf("\nenter value of a[%d]:",i);
      scanf("%d",&a[i]);
    }
     j = &a[0];+
     for(i=0;i<n;i++)
     {
        b[i] = *(j+i);
        printf("%d",b[i]);
     }
}