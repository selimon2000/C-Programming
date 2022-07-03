/*Given as input an integer number of seconds, print as output
the equivalent time in hours, minutes and seconds. Recommended output
format is something like 7322 seconds is equivalent to 2 hours 2 minutes 2 seconds */

#include <stdlib.h>
#include <stdio.h>

int givenseconds = 260001, seconds, minutes, hours, days;

void time_converter(int *pseconds, int *pminutes, int *phours, int *pdays)
{
    *pdays = givenseconds / 86400;
    *phours = (givenseconds - (*pdays * 86400)) / 3600;
    *pminutes = (givenseconds - (*pdays * 86400 + *phours * 3600)) / 60;
    *pseconds = (givenseconds - (*pdays * 86400 + *phours * 3600 + *pminutes * 60));
}

int main()
{
    time_converter(&seconds, &minutes, &hours, &days);
    printf("days:%d, hours: %d, minutes:%d, seconds%d", days, hours, minutes, seconds);
}