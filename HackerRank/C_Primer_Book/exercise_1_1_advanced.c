#include <stdio.h>
#include <math.h>
int num1, num2, sum, product, average, difference;

int calculations(int num1, int num2, int *psum, int *pproduct, int *paverage, int *difference)
{
    *psum = num1 + num2;
    *pproduct = num1 * num2;
    *paverage = (num1 + num2) / 2;
    *difference = fabs(num1 - num2);
    return 0;
}

int main()
{
    printf("Enter two numbers, seperated by a space:");
    scanf("%d%d", &num1, &num2);
    calculations(num1, num2, &sum, &product, &average, &difference);
    printf("sum is %d,\n product is %d,\n average is %d,\n and finally difference is %d", sum, product, average, difference);
}