// Write a C program to calculate the distance between the two points.
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1, y1, x2, y2;
    float distance;

    printf("Input x1: ");
    scanf("%i", &x1);

    printf("Input y1: ");
    scanf("%i", &y1);

    printf("Input x2: ");
    scanf("%i", &x2);

    printf("Input y2: ");
    scanf("%i", &y2);

    distance = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

    printf("Distance between the said points: %.4f\n", distance);

    return 0;
}