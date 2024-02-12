#include <stdio.h>

int main()
{
int numbers[]={1, 2, 3, 4, 5};
int *ptr=numbers;
int *ptr2=numbers[1];
printf("%d   %d", ptr, ptr2);
}