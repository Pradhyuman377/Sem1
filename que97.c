#include<stdio.h>
#include<string.h>
void main()
{
    int n=0,x;
    char t;
    char string[20];
    char *p;
    printf("enter a string");
    fgets(string,20,stdin);
    x=strlen(string);
    p=&string[0];
    for(int i=0;i<=x;i++)
    {
        t=*(p+i);
        if(t==97 || t==65)
        {
         n++;
        }
        else if(t==101 || t==69)
        {
         n++;
        }
        else if(t==105 || t==73)
        {
         n++;
        }
        else if(t==111 || t==73)
        {
         n++;
        }
        else if(t==117 || t==85)
        {
         n++; 
        }
        
    }
    printf("number of vowels is %d",n);
}