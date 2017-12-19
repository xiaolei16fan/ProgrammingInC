#include <stdio.h>

int main(void)
{
    int i, j, next_multiple;

    // Test
    i = 256;
    j = 7;

    next_multiple = i + j - (i % j);

    printf("%i round off to the next largest event multiple of %i is %i\n",
            i, j, next_multiple);

    return 0;
}