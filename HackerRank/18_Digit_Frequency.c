#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char input[1000];
    scanf("%[^\n]1000s", input);
    
    int counter[10] = {0};
    
    for (int i = 0; i < strlen(input); i++) {
        int number = input[i] - '0';
        if (number >= 0 && number < 10)
            counter[number]++;
    }
    
    for (int i = 0; i<10; i++)
        printf("%d ", counter[i]);
    
    return 0;
}