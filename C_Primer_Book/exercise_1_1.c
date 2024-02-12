#include <stdio.h>

float calculations(float *n1, float *n2)
{
    float psum = *n1 + *n2;
    return psum;
}

int main()
{
    printf("Enter two numbers, seperated by a space:");
    float num1, num2;
    scanf("%f%f", &num1, &num2);

    printf("%f", calculations(&num1, &num2));
}