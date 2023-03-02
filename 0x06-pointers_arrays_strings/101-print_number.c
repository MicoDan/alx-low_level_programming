#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Description: This function prints the integer value of n using only the
 * _putchar function. It handles negative numbers correctly by printing a
 * minus sign before the digits.
 */
void print_number(int n)
{
/* Handle negative numbers */
if (n < 0) {
_putchar('-');
n = -n;
}

/* Convert the integer to a string */
char str[12]; /* Maximum size of a 32-bit integer plus a sign and a null terminator */
int i = 0;
do {
str[i++] = n % 10 + '0';
n /= 10;
} while (n != 0);
str[i] = '\0';

/* Print the string in reverse order */
for (int j = i - 1; j >= 0; j--) {
_putchar(str[j]);
}
}





