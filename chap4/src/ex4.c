#include <stdio.h>

int main(void)
{
    int factorial = 1;

    printf(" n    factorial\n");
    printf("---  -----------\n");

    for (int n = 1; n <= 10; ++n)
    {
        for (int j = 1; j <= n; ++j)
        {
            factorial *= j;
        }

        printf("%2i    %i\n", n, factorial);

        factorial = 1;
    }

    return 0;
}