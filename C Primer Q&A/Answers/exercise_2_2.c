/*Read an integer value. Assume it is the number of a month
of the year; print out the name of that month. If the number
is invalid, print an error message. Write a program that
repeats this for 3 month entries. */

#include <stdio.h>
int month_number, i;
char char_months[][4] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};

int main()
{
    for (i = 0; (i < 3) && !(month_number > 0 && month_number <= 12); i++)
    {
        printf("Type number of month\n");
        scanf("%d", &month_number);
        while (month_number > 0 && month_number <= 12)
        {
            printf("%s", char_months[(month_number - 1)]);
            return 0;
        }
        printf("Unaccepted input, try again!\n\n");
    }
    printf("out of chances");
}