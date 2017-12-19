#include <stdio.h>

int main(void)
{
    float x = 2.55, results;

    results = (3 * (x * x * x)) - (5 * (x * x)) + 6;

    printf("The results is %f\n", results);

    return 0;
}