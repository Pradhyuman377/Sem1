//WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.
#include<stdio.h>
void checker(char);
void main()
{
    char c;
    printf("enter a charcter");
    scanf("%d",&c);
    checker(c);
}

 void checker(char r)
 {
    char a,e,i,o,u,A,E,I,O,U;
    if(r==a  || r==e || r==i || r==o || r==u || r==A || r==E || r==I || r==O || r==U)
    printf("entered char is vowel");
    else
    printf("entred is not vowel");
 }