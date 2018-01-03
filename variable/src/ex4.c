#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch[] = "4";

    printf("%.2f\n", strtod(ch, NULL));

    return 0;

}
