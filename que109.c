//MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
#include<stdio.h>
void modify(int *);
void main()
{
    int n,*p,k;
    printf("enter a value");
    scanf("%d",&n);
    p=&n;
    modify(&n);
}
void modify(int *p)
{
    int n;
    printf("enter modified value");
    scanf("%d",&n);
    *p=n;
    printf("modified value is %d",*p);
}
