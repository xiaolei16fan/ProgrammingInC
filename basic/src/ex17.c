#include <stdio.h>

int main(void)
{
    int initSeconds;
    int hours, minuts, seconds;

    printf("Input seconds: ");
    scanf("%i", &initSeconds);

    hours = initSeconds / 3600;
    minuts = (initSeconds % 3600) / 60;
    seconds = (initSeconds % 3600) % 60;
    printf("There are:\n");
    printf("H:M:S - %i:%i:%i\n", hours, minuts, seconds);

    return 0;
}