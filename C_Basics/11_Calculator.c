#include <stdio.h>

double num1, num2;
char op;

int main()
{
    printf("Enter a number:");
    scanf("%lf", &num1);

    printf("Enter an operator:");
    scanf(" %c", &op);

    printf("Enter a second number:");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("%f", num1 + num2);
    }

    else if (op == '-')
    {
        printf("%f", num1 - num2);
    }

    else if (op == '/')
    {
        printf("%f", num1/num2);
    }

    else if (op == '*')
    {
        printf("%f", num1*num2);
    }
    
    else
    {
        printf("error, please input a an operator");
        return 0;
    }
}