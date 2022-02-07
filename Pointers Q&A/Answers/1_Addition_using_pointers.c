#include <stdio.h>

int main()
{
  int number1, number2, sum;
  printf("Enter two numbers to add together, seperated by a space:\n");
  scanf("%d%d", &number1, &number2);

  int *num1 = &number1;
  int *num2 = &number2;
  sum = *num1 + *num2;
  printf("%d", sum);
}