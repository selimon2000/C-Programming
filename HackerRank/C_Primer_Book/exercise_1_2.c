/* Write a program to read a "float" representing a number of degrees Celsius,
and print (also as a "float") the equivalent temperature in degrees Fahrenheit.
Print your results in a form such as 100.0 degrees Celsius converts to
212.0 degrees Fahrenheit*/

#include <stdio.h>

double a;

float tempconverter(float temp)
{
    float finaltemp=temp*2.12;
    return finaltemp;
}

int main()
{
    printf("Enter the temperature in degrees Celsius which will be converted to degrees Farenheit\n");
    scanf("%lf", &a);

    printf("%0.2f degrees Celsius converts to %.2f degrees Farenheit", a, tempconverter(a));
}