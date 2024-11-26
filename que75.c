//student mark info
#include<stdio.h>
void main()
{
    int a[3][3],b[3][1],i,j=0,k=0,max=0,sub_max=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("marks of %d in  sub %d",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
            printf("total mark of %d is %d",i,j);
            b[i][k]=a[i][k] + a[i][k+1] + a[i][k+2];

    }
    for(i=0;i<3;i++)
    {
        for(k=0;k<1;k++)
        {
            printf("\ntotal mark of roll %d is: %d",i,b[i][k]);
        }
    }
    // for total higest
    for(i=0;i<3;i++)
    {
        if(max<b[i][k])
        {
            max=b[i][k];
        }
    }
   for(i=0;i<3;i++)
   {
    if(max==b[i][k])
    {
        printf("\nroll no %d got highest mark",i);
    }
   }
   //for highest mark in all subject
  for(j=0;j<3;j++)
  {
    for(i=0;i<3;i++)
    {
       if(sub_max[i]>a[i][j])
       {
          sub_max[i]=a[i][j];
       }
    }
  }
 }

