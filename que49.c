#include<stdio.h>
void main ()
{
    int rows;
    int i,j,k,f;
    printf("enter number of rows");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
{
    for(k=rows;k>=i;k--)
    {
        printf(" ");
    }
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
}
}    