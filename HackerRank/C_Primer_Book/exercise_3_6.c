/*
Write a function called half() that takes an integer argument. The function must print the number it
received to the screen, then the program should divide that number by two to make a new number. If
the new number is greater than zero the function then calls the function half() (itself!) passing it the new
number as its argument. If the number is zero or less than zero the function exits.
So, for example, calling the function half() with an argument of 100, the screen output should be
100
50
25
...
...
1
*/

#include <stdio.h>
#include <math.h>

void half(float *n)
{
    printf("\n%0.1f", *n);
    *n /= 2;
    *n=round(*n);
}

int main()
{
    float n;

    printf("Enter a positive integer:");
    scanf("%f", &n);

    while (n != 1)
    {half(&n);}
    
    printf("\n1\n\nProgram finished");
}