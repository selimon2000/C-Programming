#include <stdio.h>


int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char numbers[][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int n = a; n <= b; n++)
    {
        if (n != a)
        {
            printf("\n");
        }
        if (n > 0 && n < 10)
        {
            printf("%s", numbers[n - 1]);
        }
        else if (n > 9)
        {
            if (n % 2 == 0)
            {
                printf("even");
            }
            else
            {
                printf("odd");
            }
        }
    }

    return 0;
}