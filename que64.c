//PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.
#include<stdio.h>
void main()
{
    int a[3][3],b[4][4];
    int i,j,sum=0,total=0;
   int c=0;
    printf("enter numbers");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];
            total=a[i][j] + total;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           sum= b[i][j] + sum;
           b[i][3]=sum;
      }
      sum=0;
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            sum = b[i][j] + sum;
            b[3][j] = sum;
        }
        sum=0;
    }
    b[3][3]=total;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
}