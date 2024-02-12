#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    for (size_t i = 0; i < num / 2; i++)
    {
        swap(&arr[i], &arr[num - i - 1]);
    }

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}