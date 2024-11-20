/*WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.*/
#include<stdio.h>
void squre(int *);
void cube (int *);
void main()
{
    int n,*p;
    printf("enter a number");
    scanf("%d",&n);
    p=&n;
    squre(p);
    cube(p);
}
void squre(int *y)
{
  int s;
  s=((*y )* (*y));
  printf("%d",s);
}
void cube(int *u)
{
    int m;
    m = (*u * *u * *u);
    printf("\n%d",m);
}