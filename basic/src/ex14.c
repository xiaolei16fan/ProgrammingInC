#include <stdio.h>

int main(void)
{
    int distance;
    float liters;

    printf("Input total distance in km: ");
    scanf("%i", &distance);

    printf("Input total fuel spent in liters: ");
    scanf("%f", &liters);

    printf("Average consumption(km/lt) %.3f\n", distance / liters);

    return 0;
}