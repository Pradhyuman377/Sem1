/* WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING
POINTERS.*/
#include<stdio.h>
#include<string.h>
void main()
{
    char m,string[20],temp,*p;
    int i=0,n,round;
    printf("enter a string:");
    gets(string);
    p=&string[0];
    n = strlen(string);
    for(round=0;round<n;round++)
    {
        for(i=0;i<n-1;i++)
        {
         if(*(p+i) > *(p+i+1))
        {
           temp = *(p+i);
           *(p+i) = *(p+i+1);
           (*(p+i+1)) =temp;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",*(p+i));
    }
}
