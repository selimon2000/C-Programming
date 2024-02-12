/* Write a C program to read through an array of type int using pointers. How you populate this array is
up to you. Write the array to screen so that it fits in one screenshot. Then ask the user to input a value.
Your C program is to scan through the array to find the value and output how many occurrences were
found. You must use pointers.  */

#include <stdio.h>

int valueinarray(int val, int *arr, int size)
{
    int n=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {n++;}
    }
    return n;
}

int main()
{
    int number;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 9, 18, 19, 20};
    int size = sizeof(array) / sizeof(array[1]);
    
    printf("Numbers in array:");
    for (int i = 0; i < size; i++)
    {printf("\n%d", array[i]);}

    printf("\n\nWhich number do you want to check: ");
    scanf("%d", &number);

    printf("%d",valueinarray(number, array, size));
}