//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.
#include<stdio.h>
void armstrongchecker(int);
void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    armstrongchecker(a);
}
 void armstrongchecker(int r)
 {
    int p,i,t,b=0;
    t=r;
    for(i=1;1>0;i++)
    {
      p=r%10;
      r=r/10;
      b=(p*p*p) + b;
      if (r==0)
       break;
    }
    if (t==b)
    printf("entered number is armstrong");
   else 
   printf("entered number is not armstrong");
 }    