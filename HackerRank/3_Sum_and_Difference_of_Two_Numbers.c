#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int int_1, int_2;
    float float_1, float_2;
    
    // scanf("%d%d", &int_1, &int_2);
    // scanf("%f%f", &float_1, &float_2);
    
    scanf("%d%d%f%f", &int_1, &int_2, &float_1, &float_2); 

    printf("%d %d", int_1+int_2, int_1-int_2);
    printf("\n%0.1f %0.1f", float_1+float_2, float_1-float_2);

    return 0;
}