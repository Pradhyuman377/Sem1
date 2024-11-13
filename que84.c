//WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION USING stucture
#include<stdio.h>
struct book
{
    int id_number;
    char name[30];
    float prize;
}b1;

void main()
{
    printf("enter id, name & prize of book");
    scanf("%d",&b1.id_number);
    fflush(stdin);
    fgets(b1.name,30,stdin);
    scanf("%f",&b1.prize);
    printf("here are the information of book");
    printf("\n %d %s %f ", b1.id_number,b1.name,b1.prize);
}   