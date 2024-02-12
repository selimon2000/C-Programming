/*Write a C program that asks the user for an input and stores it in a variable. Then, the program prints 
out something like. 
The value entered is <value> and is stored at memory location <location value>.*/

#include <stdio.h>

int main()
{   
    char c;
    printf("Print a number/letter:");
    scanf("%c", &c);

    printf("The value entered is %c and is stored at memory location %p", c, &c);
}