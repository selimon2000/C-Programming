#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

// version 1
int max_of_four(int a, int b, int c, int d) {
    int max = (a < b) ? b : a;
    max = (max < c) ? c : max;

    return (max < d) ? d : max;
}

// version 2 - 1 line
// int max_of_four(int a, int b, int c, int d)
// {
//     return (a > b ? a : b) > (c > d ? c : d) ? (a > b ? a : b) : (c > d ? c : d);
// }

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}