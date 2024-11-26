#include<stdio.h>
void main()
{
    int i,j,k,rows=4;
    for(i=0;i<rows;i++)
      {
        for(k=rows;k>i;k--)
        {
          printf(" ");
        }
        for(j=0;j<i*2-1;j++)
        {
          printf(" *");
        }
        printf("\n");
      }
      for(i=rows;i>0;i--)
      {
        for(k=rows;k>i;k--)
        {
          printf(" ");
        }
        for(j=0;j<2*i-1;j++)
        {
           printf("* ");
        }
        printf("\n");
      }
}