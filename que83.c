//WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.
#include<stdio.h>
#include<limits.h>
int max(void);
void main()
{
    int b;
    b=max();
    printf(" maximum is %d",b);
}
int max(void)
{
    int a[5],i;
    int p=INT_MIN;
    printf("enter array element");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>p)
        p=a[i];
    }
    return(p);
}