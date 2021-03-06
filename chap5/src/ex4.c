#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float new, init;
    char operator;
    bool isClosed = false;

    printf("Begin Calculations\n");

    while (true)
    {
        scanf("%f %c", &new, &operator);
       
        switch (operator)
        {
            case 'S':
                printf("= %f\n", new);
                init = new;
                break;
            case 'E':
                isClosed = true;
                break;
            case '+':
                printf("= %f\n", init += new);
                break;
            case '-':
                printf("= %f\n", init -= new);
                break;
            case '*':
                printf("= %f\n", init *= new);
                break;
            case '/':
                if (new == 0)
                {
                    printf("Divised by zero. Continue.");
                    continue;
                }
                printf("= %f\n", init /= new);
                break;
            default:
                printf("Invalide operator. Input only \"S E + - * /\".\n");
        }

        if (isClosed)
        {
            printf("= %f\n", init);
            printf("End of Calculations.\n\n");
            break;
        }
    }

    return 0;
}
