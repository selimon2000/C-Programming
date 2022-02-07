/* Write a program to read in 10 numbers and compute the average, maximum and minimum values.
Finally, sort them in order to get an output something like (only 5 numbers shown):
(hint for printing to screen: just as \n means a new line, \t introduces a tabulation)

You entered The sorted list is
10 1
15 2
2 10
1 15
43 43     */

#include <stdio.h>
int i, x, sum, swapped, temp;

int main()
{
    printf("Enter the number of numbers:\n");
    scanf("%d", &x);
    #define count x

    int numberlist[count + 1];
    printf("Enter %d numbers, separated by a new line:\n", count);
    for (i = 0; i <= (count - 1); i++)
    {
        scanf("%d", &numberlist[i]);
        sum += numberlist[i];
    }

    while (1)
    {
        swapped = 0;
        for (i = 0; i < count - 1; i++)
        {
            if (numberlist[i] > numberlist[i + 1])
            {
                temp = numberlist[i];
                numberlist[i] = numberlist[i + 1];
                numberlist[i + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
    printf("The numbers in ascending order is:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d\n", numberlist[i]);
    }
    printf("The average is %d, the minimum value is %d, and the maximum value is %d", sum / count, numberlist[0], numberlist[count - 1]);
}