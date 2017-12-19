#include <stdio.h>

int main(void)
{
    int i;

    printf(" n     n*n\n");
    printf("---   -----\n");

    for (i = 1; i <= 10; ++i)
    {
        printf("%2i      %i", i, i * i);
        printf("\n");
    }

    return 0;
}