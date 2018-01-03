#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number, input;

    srand(time(NULL));

    number = rand() % 10 + 1;
    printf("%i\n", number);

    do
    {
        printf("Guess the number (1 to 10): ");
        scanf("%d", &input);
        if (number > input)
        {
            printf("The number is higher\n");
        }
    }
    while (number != input);

    printf("That is correct\n");
    
    return 0;
}
