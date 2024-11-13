//function that count length of string
#include<stdio.h>
int s(char p[]);
void main()
{
   char c[100];
   int d;
   printf("enter a string");
   for(int i=1;i<100;i++)
   {
    scanf("%[^\n]s",c);
   }
   d=s(c);
   printf("%d",d);
}
int s(char p[100])
{
    int i=0,count=0;
    while(p[i]!='\0')
    {
        count++;
        i++;
    }
    return(count);
}