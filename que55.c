//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND TOTAL NO EVEN
#include<stdio.h>
void main()
{
    int odd,a[10],i,c=0;
    printf("enter 10 numbers");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
            if(a[i]%2!=0)
            c++;
    }
    printf("%d",c);
}