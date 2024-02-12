/* Write a program that takes three variable (a, b, c) in as separate parameters and calls on a function 
which rotates the values stored so that value a goes to b, b to c and c to a. Output the values of your 
variables before and after the swap in an understandable manner. */

#include <stdio.h>

void swapIntegers(int *a, int *b, int *c)
{
    int temp = *a;
    *a=*b;
    *b= *c;
    *c=temp;
}

int main()
{   
    int a, b, c;
    printf("Enter 3 numbers separated by a space: ");
    scanf("%d%d%d", &a,&b,&c);
    printf("\nA is equal to %d, b is equal to %d, c is equal to %d", a, b, c);
    printf("\nRearranging letters:");

    swapIntegers(&a, &b, &c);

    printf("\nA is equal to %d, b is equal to %d, c is equal to %d", a, b, c);
}