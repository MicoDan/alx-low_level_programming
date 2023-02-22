#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count, flag, digit1, digit2, digit3;
count = 0;
digit1 = 0;
digit2 = 1;
while (count < 98)
{
digit3 = digit1 + digit2;
if (flag == 1)
putchar(',');
printf("%d", digit3);
digit1 = digit2;
digit2 = digit3;
flag = 1;
count++;
}
putchar('\n');
return (0);
}

