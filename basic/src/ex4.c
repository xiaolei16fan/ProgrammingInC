// Write a C program to print the following characters in a reverse way.
#include <stdio.h>

int main(void)
{
    char test[] = "XML";
    int length = sizeof(test) / sizeof(test[0]);

    for (int i = length-2; i >= 0; --i)
    {
        printf("%c", test[i]);
    }

    printf("\n");

    return 0;
}