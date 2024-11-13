//WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.NCR = (!N/(!R*!(N-R)));
#include<stdio.h>
int fact(int);
void ncr(int,int,int);
void main()
{
    int n,r,a,b,c;
    printf("enter the number of n and r");
    scanf("%d%d",&n,&r);
    a=fact(n);
    b=fact(n-r);
    c=fact(r);
    ncr(a,b,c);
}
 int fact(int x)
{
    int i,y=1;
    for(i=1;i<=x;i++)
    {
        y=y*i;
    }
    return(y);
}

void ncr(int r,int p,int t)
{
    int z;
    z= r/(p*t);
    printf("%d",z);
}