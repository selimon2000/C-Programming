/*Read a positive integer value, and compute the following sequence: If the number is
 even, halve it; if it's odd, multiply by 3 and add 1. Repeat this process until the
 value is 1, printing out each value. */

#include <stdio.h>
int x, steps=0;

int main()
{
    printf("Enter positive integer:");
    scanf("%d", &x);
    printf("Initial value is %d", x);

    while (x != 1)
    {
        //if the number is even, halve it
        if(x%2==0)
        {x/=2;}
        //if it's odd, multiply by 3 and add 1
        else
        {x=x*3+1;}

        steps++;

        if (x != 1)
        {printf("\nNext value is: %d", x);}
        else
        {printf("\nFinal value %d, number of steps is %d", x, steps);}
    }
}