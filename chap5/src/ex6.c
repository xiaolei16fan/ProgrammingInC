// 未完工
#include <stdio.h>

int main(void)
{
    int number, a, reverse;
    
    // 用户输入内容
    printf("Enter the number: ");
    scanf("%i", &number);

    // 倒序排列
    while (reverse != 0)
    {
        int i;
        i %= 10;

    }

    // 提取每一个数字
    do
    {
        a = number / 10;
        switch (a)
        {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
            default:
                printf("Not match number.\n");
        }
        printf(" ");
        number = number / 10;
    }
    while (number != 0);

    printf("\n");

    return 0;
}
