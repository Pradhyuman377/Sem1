#include<stdio.h>
#include<stdlib.h>
void main()
{
    char string[50];
    FILE *fp;
    fp=fopen("LNMIITSTUDENT.DAT","ab");
    printf("enter content");
    fgets(string,50,stdin);
    fputs(string,fp);
    fclose(fp);
}