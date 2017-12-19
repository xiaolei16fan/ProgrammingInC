#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%i %i", &a, &b);

    if (a % b == 0)
        printf("%i can be divised by %i\n", a, b);
    else
        printf("%i can not be divised by %i\n", a, b);

    return 0;
}