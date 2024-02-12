#include <stdio.h>
int fno, sno, sum, summ, *n1, *n2;

int addTwoNumbers(*n1, *n2)
{
    sum = *n1 + *n2;
    return sum;
}

int main()
{
    printf("\n\n Pointer : Add two numbers using call by reference, seperated by a space\n");
    scanf("%ld%ld", &fno, &sno);
    summ=addTwoNumbers(&fno, &sno);

    printf("The sum of %ld and %ld  is %ld\n\n", fno, sno, summ);
}
