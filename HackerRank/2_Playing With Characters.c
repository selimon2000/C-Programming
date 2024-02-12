#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Scanning for char
    char s_1;
    scanf("%c", &s_1);
    
    // Scanning for String
    char s_2[100];
    scanf("%s", &s_2);
    
    // Scanning for a line
    char s_3[100];
    // Use scanf("\n") to consume the newline haracter from the previous input
    scanf("\n");
    // Use scanf("%[^\n]%*c") to read the sentence
    scanf("%[^\n]%*c", s_3);
    
    printf("%c\n%s\n%s", s_1, s_2, s_3); 
    
    return 0;
}