#include<stdio.h>
void main()
{
    int i,j,k,rows;
    printf("enter number of rows");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++)
    {
        for(k=rows;k>=i;k--)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%d",j+1);
        }
       printf("\n");
    } 
}