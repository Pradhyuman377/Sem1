//WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.
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
     j = &a[0];
     for(i=1;i<n;i++)
     {
        b[i] = *(j+n-1-i);
     }
     for(i=0;i<n;i++)
     {
        printf("%d",b[i]);
     }
}
