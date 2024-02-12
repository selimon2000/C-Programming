/* Write a program to calculate the factorial of an integer number using recursion (hint: very similar to the
example in the concepts section). Remember that 3!=3*2*1=6 and 0!=1. Create suitably explanatory
inputs and outputs. */

#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer greater or equal to 0:");
    scanf("%d", &n);

    if (n == 0)
    {printf("\nFactorial of 0 is: 1");}

    else
    {
        printf("\nFactorial of %d is: ",n);
        for (int i = n-1; i > 0; i--)
        {n*=i;}
        printf("%d",n);
    }
}