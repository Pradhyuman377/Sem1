#include<stdio.h>
void concate(void);
void comaparision(char *);
void main()
{
    int i;
    char string[200];
    char string2[200];
    char *p;
    p = string;
    printf("enter a string : ");
    fgets(string,200,stdin);
    for(i=0;i<200;i++)
    {
        string2[i] = string[i];
    }
    printf("%s",string2);
    comaparision(p);
    concate();
}
void comaparision(char *r)
{
    char string3[200];
    char *q;
    int i,c;
    q=string3;
    printf("enter 3rd string : ");
    fgets(string3,200,stdin);
    for(i=0;i<200;i++)
    {
         if(string3[i]> (*(r+i)))
         {
            c=1;
            break;
         }
         else
         {
            c=0;
            break;
         }
    }
    if(c==1)
    {
        printf("string3 is greter");
    }
    else
    {
        printf("string1 is greter or equal");
    }
}

void concate(void)
{
    int n,j=0,count=0;
    char string[200];
    char string2[200];
    char *p,*q;
    printf("\nenter two strings");
    gets(string);
    fflush(stdin);
    gets(string2);
    p=string;
    q=string2;
    while(string[j]!='\0'){
        count++;
        j++;
        }
    for(int i=count;*q!='\0';i++){
            string[i] = *q;
            q++;
            n=i;
            }
       string[n+1] = '\0';
        printf("%s",string);
}
void reverse(void)
{
   printf("\nenter two string for revese");
   
}