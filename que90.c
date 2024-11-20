//WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS.
#include<stdio.h>
void main()
{
    printf("enter string");
    char c[100];
    char *j,*f;
    scanf("%d[^/n]",c);
    j=&c[0];
    f=&c[];
    printf("%d",f-j+1);
}