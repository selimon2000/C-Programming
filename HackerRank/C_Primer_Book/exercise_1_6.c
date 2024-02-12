/*Write a program to read two integers with the following significance.
The first integer value represents a time of day on a 24 hour clock, so that 1245 represents quarter to
one mid-day, for example.
The second integer represents a time duration in a similar way, so that 345 represents three hours and
45 minutes.
This duration is to be added to the first time, and the result printed out in the same notation, in this case
1630 which is the time 3 hours and 45 minutes after 12.45.
Typical output might be e.g., Start time is 1415. Duration is 50. End time is 1505.
 Start time is 2300. Duration is 200. End time is 100.
You are not allowed to use if... else statements to solve this exercise. You can however, use
expressions containing comparison operator, e.g., the expression x_gr_zero=(x>0)*x; yields x for
x>0 and 0 otherwise. */

#include <stdio.h>
int totalminutes, days, hours, minutes;

void TwentyFourHourTimeAdder(int *totalminutes, int *days, int *hours, int *minutes, int t1, int t2)
{
    *totalminutes = (t1 / 100) * 60 + (t2 / 100) * 60 + t1 % 100 + t2 % 100;
    *days = *totalminutes / (60 * 24);
    *hours = (*totalminutes - 60 * 24 * *days) / 60;
    *minutes = *totalminutes - 60 * 24 * *days - *hours * 60;
}

int main()
{
    int t1 = 2330;
    int t2 = 2800;
    TwentyFourHourTimeAdder(&totalminutes, &days, &hours, &minutes, t1, t2);
    printf("%d:%d, %d day(s) ahead", hours, minutes, days);
}