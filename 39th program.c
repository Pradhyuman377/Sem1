// PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,.........N.

#include<stdio.h>
void series(int n);
int fact(int n);
float answer(int n);
int main()
{   int n;
    printf("Emter the value of n: ");
    scanf("%d",&n);
    series(n);
    double result = 0;
    for(int i =1; i <=n; i++)
    {
        double facti = i/fact(i);
        result = result + facti;

    }
    printf("\n = %lf",result);
    
    
}

void series(int n)
{
    for(int i =1; i<= n; i++)
    {
        printf("%d/%d!+",i,i);

    }
}

int fact(int n)
{
    if(n == 0)
    return 1;
   int factNm1 = fact(n-1);
   int factN = n * fact(n-1);
   return factN;

}


