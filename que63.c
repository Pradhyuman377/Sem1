//PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.
#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j,max,min;
    printf("enter numbers");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    min=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        if(max<a[i][j])
        max=a[i][j];
       else if(min>a[i][j])
        min=a[i][j];
    }
    }
    printf("max is %d",max);
    printf("\nmin is %d",min);
}