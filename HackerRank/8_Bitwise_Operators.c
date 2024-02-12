#include <stdio.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    // Write your code here.
    // For each number i (from 1 to n), find the maximum value of the logical AND, OR and XOR, when compared against all integers through n that are greater than i.
    // Consider a value only if the comparison returns a result less than k

    int max_OR = 0, max_AND = 0, max_XOR = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int current_AND = i & j;
            int current_OR = i | j;
            int current_XOR = i ^ j;

            if ((current_AND > max_AND) && (current_AND < k))
                max_AND = current_AND;
            if ((current_OR > max_OR) && (current_OR < k))
                max_OR = (current_OR);
            if ((current_XOR > max_XOR) && (current_XOR < k))
                max_XOR = (current_XOR);
        }
    }
    
    printf("%d\n%d\n%d", max_AND, max_OR, max_XOR);
}

int main()
{
    int n = 5, k = 4;

    // scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}