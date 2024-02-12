#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Unoptimised
/*
int main() {

    int n;
    scanf("%d", &n);

    int array_size = n * 2 - 1;   
    int (*shape_array)[array_size] = calloc(array_size, sizeof(*shape_array));

    
    for (int i = 0; i < n; i++) {
        int input = n - i;
        
        for (int x = i; x < array_size - i; x++) {
            for (int y = i; y < array_size - i; y++)
                shape_array[x][y] = input;
        }
        
    }
    
    for (int i = 0; i < array_size; i++) {
        for (int j = 0; j < array_size; j++) {
            printf("%d ", shape_array[i][j]);
        }
        printf("\n");
    }
    
    free(shape_array);
    
    return 0;
}
*/

// Optimised
int main() {

    // Get Array Dimensions
    int n;
    scanf("%d", &n);
    // Initialise Array
    int array_size = n * 2 - 1;   
    int (*shape_array)[array_size] = calloc(array_size, sizeof(*shape_array));


    // Fill Array
    for (int i = 0; i < n; i++) {
        int input = n - i;
        
        // Left Column
        for (int x = i, y = i; y < array_size - i; y++)
            shape_array[y][x] = input;
        // Right Column
        for (int x = array_size - 1 - i, y = i; y < array_size - i; y++)
            shape_array[y][x] = input;
            
        // Top row (excluding the first and last element as they have already been filled when filling Columns)
        for (int x = i + 1, y = i; x < array_size - 1 - i; x++)
            shape_array[y][x] = input;
        // // Bottom row (excluding the first and last element as they have already been filled when filling Columns)
        for (int x = i + 1, y = array_size - 1 - i; x < array_size - 1 - i; x++)
            shape_array[y][x] = input;
    }
    

    // Print Array
    for (int y = 0; y < array_size; y++) {
        for (int x = 0; x < array_size; x++) {
            printf("%d ", shape_array[y][x]);
        }
        printf("\n");
    }
    
    // Delete Array
    free(shape_array);
    
    return 0;
}