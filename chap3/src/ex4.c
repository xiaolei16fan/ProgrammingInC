#include <stdio.h>

// Converts degrees Fahrenheit to degrees Celsius
// Formula: C = (F - 32) / 1.8
int main(void)
{
    float celsius, fahrenheit, temperature = 27;

    celsius = (fahrenheit - 32) / 1.8;

    printf("Temperature 27 converted to format Celsius from Fahrenheit is %.2f\n",
            celsius);

    return 0;
}