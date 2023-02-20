#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int comma_space = 44 << 8 | 32;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i < 9)
putchar(comma_space);
}
putchar('\n');

return (0);
}


