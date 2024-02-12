#include <stdio.h>

char colour[20];
char pluralNoun[20];
char celebrityF[20];
char celebrityL[20];

int main()
{
printf("Enter a colour:");
scanf("%s", colour);
printf("Enter a plural noun:");
scanf("%s", pluralNoun);
printf("Enter a celebrity:");
scanf("%s%s", celebrityF,celebrityL);

printf("\n\nRoses are %s\n", colour);
printf("%s are Blue\n", pluralNoun);
printf("I love %s %s\n", celebrityF, celebrityL);

}