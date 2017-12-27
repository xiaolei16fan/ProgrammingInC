// Write a C program to convert specified days into years, weeks and days.
#include <stdio.h>

int main(void)
{
    int allDays = 1329;
    int years, weeks, days;

    years = allDays / 365;

    weeks = (allDays % 365) / 7;

    days = (allDays % 365) % 7;

    printf("Years: %i\n", years);
    printf("Weeks: %i\n", weeks);
    printf("Days: %i\n", days);

    return 0;
}