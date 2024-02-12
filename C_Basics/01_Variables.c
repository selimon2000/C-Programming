#include <stdio.h>

int main()
{
    char name[8] = "Selimon";
    int age = 21;

    printf("There was a guy called %s\n", name);
    printf("He was %i years old\n", age);
    printf("Again, his name was %s, and today he is %i years old", name, age + 50);

    return 0;
}