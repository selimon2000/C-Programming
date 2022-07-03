/*Write a function which returns 1 if a positive integer is prime and 0 otherwise. A prime number can only
be divided (without remainder) by itself and by 1. (hint, the modulo operator % might be helpful for your
function)*/

#include <stdio.h>

int x;

int checkPrime(int x)
{
    int n;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {n++;}
    }
    return n;
}

int main()
{
    printf("Enter a positive integer:");
    scanf("%d", &x);

    if (checkPrime(x)>2)
    {printf("Number %d is not a prime number", x);}

    else
    {printf("Number %d is indeed a prime number", x);}
}