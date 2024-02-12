#include <stdio.h>

double cube(double num);

int main()
{
    printf("Answer: %f", cube(7.9));
}

double cube(double num)
{
    printf("Heeeeeey!");
    double result = num * num * num;
    return result;
}

/*
#include <stdio.h>
int cube(int num)
{
    int result = num * num * num;
    return result;
}

int main()
{
    int sum = cube(8);
    printf("Answer: %d", sum);
}
*/
