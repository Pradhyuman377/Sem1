// PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .
#include <stdio.h>
int main()
{  int n;   //declaration of variable to store the value of n

    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    int array1[n]; // declaration of array to store user's input
    //storing user's input
    for(int i = 0; i<n; i++)
    {  printf("Enter the number: ");
       scanf("%d",&array1[i]); 

    }

    int max1 = array1[0]; //declaration of variable to intialize maximum
    //code for finding maximum
    for(int j =0;j <n; j++)
    {
        if(max1 < array1[j])
        {
            max1 = array1[j];
        }
    }
    //storing maximum value in res1 variable
    int res1 = max1;
    //changing maximum value to 0 and triggering loop once again to get 2nd maximum value
    for(int k = 0; k<n; k++)
    {
    if(max1 == array1[k])
    {
        array1[k] = 0;
    }
    }
    //obtaining the value of 2nd max
    int max2 = array1[0];
    for(int l =0; l<n; l++)
    {
        if(max2 < array1[l])
        {
            max2 = array1[l];
        }
    }
    //printing second maximum value
    printf("%d is maximum and %d is the second maximum",res1,max2);







}