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
    void(&numberlist[count]);

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