// 计算一元二次方程的根
#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double delta, root1, root2;

    printf("Input the first number(a): ");
    scanf("%lf", &a);

    printf("Input the second number(b): ");
    scanf("%lf", &b);

    printf("Input the third number(c): ");
    scanf("%lf", &c);

    delta = (b*b) - (4*a*c);
    
    if (delta > 0)
    {
        root1 = (-b + sqrt(delta)) / (2*a);
        root2 = (-b - sqrt(delta)) / (2*a);
    }
    else if (delta = 0)
    {
        root1 = -b / (2*a);
        root2 = root1;
    }
    else
    {
        printf("No root.\n");
    }
    
    printf("Root1 = %f\n", root1);
    printf("Root2 = %f\n", root2);

    return 0;
}
