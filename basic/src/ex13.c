#include <stdio.h>

int main(void)
{
    int number[3], max = 0;

    printf("Input the first integer: ");
    scanf("%i", &number[0]);

    printf("Input the second integer: ");
    scanf("%i", &number[1]);

    printf("Input the third integer: ");
    scanf("%i", &number[2]);

    for (int i = 0; i < 3; ++i) {
        if (number[i] > max) {
            max = number[i];
        }
    }

    printf("Maximum value of three integers: %i\n", max);

    return 0;
}