/* Write a program which will ask you about your name, student number and favourite colour and print
those on separate lines. You may use either several printf instructions, each with a newline character
in it, or one printf with several newlines in the control string.
Note: Your name is an array of characters. We will look at arrays later on but I will give you an example
of a declaration of a char array of 10 letters just for the purpose of this exercise char a[10]§. Don't
forget to use the correct type specifier for a string of characters in your i/o functions.*/

#include <stdio.h>
#include <stdlib.h>

int num;
char colour[20], name[20];

int main()
{
    printf("Type your full name, with no space, just a comma\n");
    scanf("%s", &name);
    printf("Type your student number\n");
    scanf("%d", &num);
    printf("Type your favourite colour\n");
    scanf("%s", &colour);

    printf("Your name is %s, your student number is %d, and your favourite colour is %s", name, num, colour);

}