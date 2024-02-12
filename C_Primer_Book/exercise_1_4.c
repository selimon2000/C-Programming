/* Write a program to read a number of units of length (a float) and print out the area of a circle of that
radius. Assume that the value of pi is 3.14159.
Your output should take the form: The area of a circle of radius ... units is .... units.
If you want to be clever, and have looked ahead in the notes, print the message "Error: Negative values
not permitted." if the input value is negative. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float pi = 3.14159, radius;

float area_of_circle(float radius)
{
    float area = pi * radius * radius;
    return area;
}

int main()
{
    radius = 13;
    printf("The area of a circle of radius %f units is %f units", radius, area_of_circle(radius));
}