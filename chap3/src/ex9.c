#include <stdio.h>

int main(void)
{
    
    printf("(365, 7) next_multiple: %i\n", (365 + 7 - (365 % 7)));

    printf("(12258, 23) next_multiple: %i\n", (12258 + 23 - (12258 % 23)));
    
    printf("(996, 4) next_multiple: %i\n", (996 + 4 - (996 % 4)));

    return 0;
}