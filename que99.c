#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void vowelchecker( FILE *);
void main()
{
   char s[100];
   FILE *fp= fopen("f1.txt","w");
   printf("enter a string: ");
   fgets(s,100,stdin); 
   fputs(s,fp);
    fclose(fp);
   vowelchecker(fp);
}
void vowelchecker(FILE *p)
{
    char c[]={'a','e','i','o','u','A','E','I','O','U'};
    int count =0;
    char r[100];
    p  = fopen("f1.txt","r");
    fgets(r,sizeof(r),p);
        if(p !=NULL)
        {
            for(int x=0;x<strlen(r);x++)
            {
                for(int y=0;y<10;y++)
                {
                    if(c[y]==r[x])
                    {
                        count ++;
                    }
                }
            }   
            printf("vowels in a file is %d",count);
}
}