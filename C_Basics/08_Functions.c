#include <stdio.h>
void sayHi();

int main()
{
    sayHi("Selimon");
}

void sayHi(char name[])
{
    printf("Hello %s", name);
}