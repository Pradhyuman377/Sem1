//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.


#include<stdio.h>
int main()
{
    int n; //declaration of variable to store the value of n
    //taking input from the user
    printf("Enter the value of n: ");
    scanf("%d",&n);

    // declaration of array to store n numbers
    int array1[n];
    for(int i =0 ; i<n; i++)
    {
        printf("Enter the number: ");
        scanf("%d",&array1[i]);

    }
    //finding minimum entered number
    int min =array1[0];
    for(int j=0; j<n; j++)
    {
        if (min > array1[j])
        {
            min =array1[j];
        }
    }
    //finding maximum entered number
    int max = array1[0];
    for(int k =0; k <n; k++)
    {
        if (max <array1[k])
        {
            max = array1[k];
        }
    }
    //printing the output
    printf("%d is the maximum and %d is the minimum.",max,min);
    return 0;

}