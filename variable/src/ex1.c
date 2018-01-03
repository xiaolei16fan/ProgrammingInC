#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;

    printf("\nIs command processor availabel?\n");
    if (system(NULL))
    {
        printf("Command processor available!\n");
    }
    else
    {
        printf("Command processor not available!\n");
        exit(1);
    }

    printf("Executing command DIR\n");
    x = system("dir");
    printf("Returned value is: %d.\n", x);

    return 0;
}
