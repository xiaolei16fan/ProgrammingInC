// Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
#include <stdio.h>

int main(void)
{
    int amount;
    int note[7] = {100, 50, 20, 10, 5, 2, 1};

    printf("Input the amount: ");
    scanf("%i", &amount);

    printf("There are:\n");
    for (int i = 0; i < 7; ++i)
    {
        printf("%i Note(s) of %i.00\n", amount / note[i], note[i]);
        amount = amount % note[i];
    }

    return 0;
}