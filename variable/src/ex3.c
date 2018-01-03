#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch1[] = "2016";
    char ch2[] = "4235440";
    char ch3[] = "-3624422";
    char ch4[] = "5947391";
    
    printf("In decimals: %li, %li, %li, %li.\n",
            strtol(ch1, NULL, 0),
            strtol(ch2, NULL, 0),
            strtol(ch3, NULL, 0),
            strtol(ch4, NULL, 0));

    return 0;
}
