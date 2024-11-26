//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE,NEGATIVE, AND ZERO ELEMENTS.
#include<stdio.h>
void main()
{
    int a[10],i,c=0,d=0,e=0;
    printf("enter 10 number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        c++;
        else if(a[i]<0)
        d++;
        else
        e++;
    }
    printf("number of + - & 0 are %d %d %d respectively",c,d,e);
}