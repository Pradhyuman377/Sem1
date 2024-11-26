//wright program to find transpose of a matrix
#include<stdio.h>
void main()
{
    int i=0,j=0,a[3][3],temp;
    printf("enter charcter");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<=i;j++)
       {
          temp = a[i][j];
          a[i][j] = a[j][i];
          a[j][i] = temp;
       }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
}