//PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.
#include<stdio.h>
void main()
{
    int n,i,max=0,smax=-1; //smax and max cannot intialize same
    printf("enter number you want to check");
    scanf("%d",&n);
    int a[n];
    printf("enter those numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[0] > max)
        {
            max=0;
        } 
        if(a[i]>max)
        {
            smax=max;
            max=a[i];
        
        }
    }
    printf("max is %d",max);
    printf("\nsmax is %d",smax);
}