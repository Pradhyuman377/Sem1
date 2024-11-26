#include<stdio.h>
void main()
{
    int i,j,k,rows;
    printf("enter number of rows");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++)
    {
        for(j=0;j<=rows;j++)
      {
        if (j==i)
        printf("1");
    else
        printf("0");
      }
      printf("\n");
    }
}