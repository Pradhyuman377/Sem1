//WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int no_of_char,words,line=0,i,count=0;
    char s[100];
    FILE *fp;
    fp = fopen("f1.txt","r");
    fgets(s,sizeof(s),fp);
    no_of_char=strlen(s); 
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==32)
        {
            count++;
        }
        if(s[i]=='\n')
        {
          line++;
        }
    }
    printf("no of charcter and word in a file is %d and %d",no_of_char,count+1);
    printf("\nnumber of lines is %d",line);
    fclose(fp);
}