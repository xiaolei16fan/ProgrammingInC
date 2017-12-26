// 计算圆的周长和面积
#include <stdio.h>
static float PI = 3.14;

int main(void)
{
    float radius = 6;
    float perimeter, area;

    perimeter = 2 * PI * radius;

    area = PI * radius * radius;

    printf("Perimeter of the Circle = %f inches\n", perimeter);
    printf("Area of the Circle = %f square inches\n", area);

    return 0;
}