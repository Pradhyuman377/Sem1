//PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM IN THERD MATRIX
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("enter charcter of matrix");
    printf("\n one by one as 1st char of a and first of b so on");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j] + b[i][j];
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}