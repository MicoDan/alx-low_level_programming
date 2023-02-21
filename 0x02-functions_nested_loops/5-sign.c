#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if the number is positive, 0 if the number is zero,
 *         -1 if the number is negative
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
putchar('0' + n);
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
putchar('0' - n);
return (-1);
}
}

