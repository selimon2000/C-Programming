#include <stdio.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf(" %1000d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    int *arr_ = arr;
    
    for (int i = 0; i < n; i++, arr_++)
        scanf(" %1000d", arr_);
    
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    printf("%d", sum);
    
    
    return 0;
}