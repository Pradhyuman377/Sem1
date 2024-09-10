//13. PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD
#include<stdio.h>
int main()
{
    int n; // declaration of variable
    //Taking input from the user
    printf("Enter the number: ");
    scanf("%d",&n);
    // code for odd-even 
    (n%2 == 0)? printf("%d is even.",n) : printf("%d is odd.",n);
    return 0;
}