/*WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
POINTERS*/
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,n,x;
    char string[20],k[20];
    char *p;
    printf("enter a string:");
    fgets(string,20,stdin);
    x=strlen(string);
        p = &string[0];
   for(i=0;i<x;i++)
   {
      k[x-i] = *(p+i);
   }
   for(i=0;i<=x;i++)
   {
   printf("%c",k[i]);
   }
}