/*Write a function to determine the number and identity of all prime numbers below an inputted positive
number n. To check operation, try at least two separate runs for values of n in excess of 41. Hint: have
you solved the exercise above? */

#include <stdio.h>

int checkPrime(int x)
{
    int n=0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        { n++;}
    }
    return n;
}

int main()
{
    int n;

    printf("Enter a positive integer:");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (checkPrime(i) == 2)
        {printf("\nPrime number found: %d", i);}
    }
    printf("\n\nProgram finished");
}