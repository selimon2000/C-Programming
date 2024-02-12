#include <stdio.h>
#include <stdlib.h>


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    i = 0;
    int j = num - 1;
    for (; i < j ;i++, j--)
        swap(&arr[i], &arr[j]);

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}