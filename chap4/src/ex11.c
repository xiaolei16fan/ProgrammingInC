#include <stdio.h>

int main(void)
{
    int sum = 0, number;

    printf("Enter the number:\n");
    scanf("%i", &number);

    while (number)
    {
        sum += (number % 10);
        number /= 10;
    }

    printf("Your results: %i\n\n", sum);

    return 0;
}