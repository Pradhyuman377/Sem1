#include<stdio.h>
void main()
{
    int i,j,k,rows;
    char c;
    printf("enter the character");
    scanf("%c",&c);
    printf("enter the number of rows");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++)
     {
        for(j=0;j<=i;j++)
        {
            printf("%c",c+i);
        }
        printf("\n");
     }
}