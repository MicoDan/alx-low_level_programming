#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a = 1, b = 2, c, sum = 2;
while (b <= 4000000)
{
c = a + b;
a = b;
b = c;
if (b % 2 == 0)
{
sum += b;
}
}

int digits = 1;
while (sum / digits > 9) {
digits *= 10;
}

while (digits > 0) {
int digit = sum / digits;
putchar(digit + '0');
sum %= digits;
digits /= 10;
}
putchar('\n');

return (0);
}
