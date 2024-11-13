//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
#include<stdio.h>
void palidromechecker(int);
void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    palidromechecker(a);
}
 void palidromechecker(int r)
 {
    int p,i;
    for(i=1;1>0;i++)
    {
      p=r%10;
      r=r/10;
      printf("%d",p);
      if (r==0)
       break;
    }
    printf("\nif output is same as input then number is palidrome");
 }    