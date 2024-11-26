/*IMPLEMENT A FUNCTION NAMED AS FLIP WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
LAST N DIGITS*/
#include<stdio.h>
#include<string.h>
void flip(int);
void main()
{
      int a;
      printf("enter a number : ");
      scanf("%d",&a);
      flip(a);
}
void flip(int k)
{
    int n,count=0,x=0,i;
    int r;
    r=k;
    printf("number of flipping : ");
    scanf("%d",&n);
    while(k!=0)
    {
        k=k/10;
        count++;
    }
    k=r;
    int arr[count];
    for(i=1;i<=count;i++)
    {
        arr[count-i] = (k%10);
        k=k/10;
    }
    for(i=0;i<1;i++)
    {
        x=arr[count-n];
        arr[count-n] = arr[count-n+1];
        arr[count-n+1] = x;
    }
    for(i=0;i<count;i++)
    {
        printf("%d",arr[i]);
    }
}