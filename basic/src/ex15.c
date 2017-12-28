// Write a C program to calculate the distance between the two points.
#include <stdio.h>

int main(void)
{
    int x1, y1, x2, y2;
    float distance;

    printf("Input x1: ");
    scanf("%i", x1);

    printf("Input y1: ");
    scanf("%i", y1);

    printf("Input x2: ");
    scanf("%i", x2);

    printf("Input y2: ");
    scanf("%i", y2);

    distance = 0; //TODO: 计算两点之间到距离sqrt()

    printf("Distance between the said points: %.4f\n", distance);

    return 0;
}