/* Write a program to read in 10 numbers and compute the average, maximum and minimum values.
Finally, sort them in order to get an output something like (only 5 numbers shown):
(hint for printing to screen: just as \n means a new line, \t introduces a tabulation)

You entered The sorted list is
10 1
15 2
2 10
1 15
43 43  */

#include <stdio.h>
int x, sum, min;

void swapIntegers(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b= temp;
}

int main()
{
    printf("Enter the number of numbers:\n");
    scanf("%d", &x);

    int numberlist[x + 1];
    int originalnumberlist[x + 1];

    printf("Enter %d numbers, separated by a new line:\n", x);
    for (int i = 0; i <= x - 1; i++)
    {
        scanf("%d", &numberlist[i]);
        originalnumberlist[i] = numberlist[i];
        sum += numberlist[i];
    }

    // rearrange number from smallest to largest in the array, where 0th is the smallest. This is done by swapping the numnbers in a while loop
    for (int i = 0; i < x; i++)
    {
        min = i;

        for (int j = i + 1; j < x; j++)
        {
            if (numberlist[j] < numberlist[min]) // if a number in the lower part of the array has a greater value, swap it
            {min = j;}
        }

        swapIntegers(&numberlist[i], &numberlist[min]);
    }

    printf("\n\nThe inputted numbers are on the left, the arranged numbers in ascending order on the right:\n");
    for (int i = 0; i < x; i++)
    {printf("%d\t%d\n", originalnumberlist[i], numberlist[i]);}

    printf("The average is %0.2f, the minimum value is %d, and the maximum value is %d", sum / 2.0, numberlist[0], numberlist[x - 1]);
}