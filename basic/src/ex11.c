#include <stdio.h>

int main(void)
{
    double weight[2];
    double purchase[2];
    double average;

    printf("Weight-Item1: ");
    scanf("%lf", &weight[0]);

    printf("No. Of item1: ");
    scanf("%lf", &purchase[0]);

    printf("Weight-item2: ");
    scanf("%lf", &weight[1]);

    printf("No. of item2: ");
    scanf("%lf", &purchase[1]);

    average = (weight[0] * purchase[0] + weight[1] * purchase[1]) / (purchase[0] + purchase[1]);
    printf("Average Value = %f\n", average);

    return 0;
}