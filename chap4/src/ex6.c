#include <stdio.h>

int main(void)
{
    int n, triangularNumber;

    triangularNumber = 0;

    for (n = 1; n <= 200; n = n + 1)
        triangularNumber = triangularNumber + n;

    printf("%-2i        %i\n", n, triangularNumber);

    return 0;
}