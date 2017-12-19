#include <stdio.h>

int main(void)
{
    int triangularNumber;

    for (int i = 5; i <= 50; i += 5)
    {
        triangularNumber = i * (i + 1) / 2;

        printf("The %ith triangular number is %i.\n",
            i, triangularNumber);
    }

    return 0;
}