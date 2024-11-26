//PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM IN A THIRD MATRIX
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j=0,k;
    printf("enter charcter of matrix");
    for(i=0;i<3;i++)
    {
        printf("\nenter a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
        printf("\nenter b[%d][%d]",i,j);
        scanf("%d",&b[i][j]);
        j++;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = 0;
            for(k=0;k<2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
}
     