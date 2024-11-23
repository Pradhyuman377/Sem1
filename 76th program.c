//function to check number is even or odd
#include<stdio.h>
void oddeven(void);
void main()
{
    oddeven();
}
void oddeven()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%2==0)
    printf("even number");
    else
    printf("odd number");
}
