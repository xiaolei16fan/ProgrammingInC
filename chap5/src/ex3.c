#include <stdio.h>

int main(void)
{
    float a, b;

    printf("Enter the two numbers:");
    scanf("%f %f", &a, &b);

    if (b == 0)
        printf("Zero division");
    else
        printf("The %g divised by %g is %.3g", a, b, a / b);

    return 0;

}