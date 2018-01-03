// 字符型转长整型.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char buffer[123]; //用于存放从标准输入流获取的字符串
   unsigned long ul;

   printf("Input an unsigned number: ");
   fgets(buffer, 123, stdin); //从标准输入流中获取字符串并传给buffer

   ul = strtoul(buffer, NULL, 0);
   printf("Output: %lu\n", ul);

   return 0;
}
