//WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.
#include<stdio.h>
void main()
{
    int i=0,n=0;
    char string[50];
    char *p;
    printf("enter a string: ");
    scanf("%[^/n]s",&string);
    p = string[0];
    while(*(p+i)!=32)
    {
        n++;
    }
 printf("number of words is %d",n+1);

}