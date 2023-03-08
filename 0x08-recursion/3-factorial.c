#include <stdio.h>

/**
 * factorial - calculates the factorial of a number using recursion
 * @n: number to calculate factorial of
 *
 * Return: factorial of n
 *         -1 if n is less than 0
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
