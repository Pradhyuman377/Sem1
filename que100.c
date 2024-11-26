#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct data
{
    int roll_num;
    char string[20];
    float total_marks;
}s;
void main()
{
    FILE *fp;
    fp=fopen("f1.java","wb");
    printf("enter roll_num name and total_marks");
    scanf("%d",&s.roll_num);
    getchar();
    fgets(s.string,20,stdin);
    s.string[strcspn(s.string, "\n")] = 0;
    scanf("%f",&s.total_marks);
    fwrite(&s,sizeof(s),1,fp);
    fclose(fp);
}