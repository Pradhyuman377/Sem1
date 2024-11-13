//WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.
#include<stdio.h>
void main()
{
    int a[10][1],i,j;
    printf("enter marks one by one");
    for(i=0;i<9;i++)
    {
        for(j=0;j<1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<1;j++)
        {
           if(a[i][j] >= 500)
           {
             printf("%d",i);
           }  
        }
    }
}