#include <stdio.h>

int main()
{
    char charc[10];
    printf("Enter your age:");
    fgets(charc, 20, stdin);
    printf("You are %s years old", charc);
}