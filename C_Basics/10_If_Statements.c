#include <stdio.h>

int max(int num1, int num2)
{
    int result;

    if (num1 > num2)
    {
        result = num1;
        return result;
    }
    else if (num2 > num1)
    {
        result = num2;
        return result;
    }
    else
    {
        printf("They're both equal\n");
        return 0;
    }
}

int main()
{
    printf("%d", max(42314, 42314));
}