// Write a C program that accepts two integers from the user and calculate the product of the two integers.
#include <stdio.h>

int main(void)
{
    int firstNumber, lastNumber;

    printf("Input the first integer: ");
    scanf("%i", &firstNumber);

    printf("Input the second integer: ");
    scanf("%i", &lastNumber);

    printf("Product of the above two integers = %i\n", firstNumber * lastNumber);

    return 0;
}