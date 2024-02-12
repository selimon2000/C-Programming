#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct triangle
{
	int a;
	int b;
	int c;
};
typedef struct triangle triangle;


double heron(triangle* t) {
    double p = (t->a + t->b + t->c) / 2.0;
    return sqrt(p * (p - t->a) * (p - t->b) * (p - t->c));
}

bool isBigger(triangle* t_1, triangle* t_2) {
    if (heron(t_1) > heron(t_2))
        return true;
        
    return false;
}

void swap_triangle(triangle* t_1, triangle* t_2) {
    triangle temp = *t_1;
    *t_1 = *t_2;
    *t_2 = temp;
}

void sort_by_area(triangle* tr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            
            if (isBigger(&tr[i], &tr[j]))
                swap_triangle(&tr[i], &tr[j]);
        }
    }    
}


int main() {
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++)
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++)
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	
	return 0;
}