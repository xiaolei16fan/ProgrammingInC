// Program to reverse the digits of a number
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number, right_digit;
    bool isNegtive = false;

    printf("Enter your number.\n");
    scanf("%i", &number);

    if (number < 0)
    {
        number *= -1;
        isNegtive = true;
        do 
        {
            right_digit = number % 10;
            printf("%i", right_digit);
            number = number / 10;
        }
        while (number != 0);

        if (isNegtive)
        {
            printf("-");
        }
    }
    

    printf("\n");
    
    return 0;
}
