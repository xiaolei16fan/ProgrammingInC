// Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days.
#include <stdio.h>

int main(void)
{
    int initDays;

    printf("Input no. of days: ");
    scanf("%i", &initDays);

    printf("%i Years(s)\n", initDays / 365);
    printf("%i Month(s)\n", (initDays % 365) / 30);
    printf("%i Day(s)\n", (initDays % 365) % 30);

    return 0;
}