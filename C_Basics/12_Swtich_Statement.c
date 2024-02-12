#include <stdio.h>

char grade = 'B';

int main()
{
    switch (grade)
    {
    case 'A':
        printf("You did great");
        break;
    case 'B':
        printf("You did good");
        break;

    case 'C':
        printf("You did average");
        break;
    case 'D':
        printf("You did bad");
        break;
    case 'E':
        printf("You did very bad");
        break;

    default:
        printf("Error");
        break;
    }
}