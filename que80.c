//WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCINUBERS.
#include<stdio.h>
 void sgen(void);
 void main()
 {
   sgen();
 }
 void sgen()
 {
    int a,b,c,d,n,i=1;
  printf("enter nember of term");
  scanf("%d",&n);
  a=0; //first term
  b=1; //second term
  while(i<=n)
  {
    c=a+b;
    a=b;
    b=c;
    printf("\n%d",c);
    i++;
  }
 }

 