#include <stdio.h>

int main(void)
{
    char id[11];
    int hrs;
    double salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &id);

    printf("Input the working hrs: ");
    scanf("%i", &hrs);

    printf("Salary amount/hr: ");
    scanf("%lf", &salary);

    printf("Employees ID = %s\n", id);
    printf("Salary = U$%.2f\n", salary * hrs);

    return 0;
}