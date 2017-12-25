// Write a C program to  print your name, date of birth. and mobile number.
#include <stdio.h>

int main(void)
{
    char name[] = "Larry Chen";
    char dateOfBirth[] = "July 21, 1992";
    char mobile[] = "86-13996977121";

    printf("Name   : %s\n", name);
    printf("DOB    : %s\n", dateOfBirth);
    printf("Mobile : %s\n", mobile);

    return 0;
}