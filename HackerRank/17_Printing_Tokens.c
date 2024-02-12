#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for (int i = 0; i < strlen(s); i++) {
        char current_char = s[i];
        if (current_char == ' ')
            printf("\n");
        else
            printf("%c", current_char);
    }
    
    return 0;
}