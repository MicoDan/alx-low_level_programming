#include <stdio.h>
/**
 * _sqrt_recursion - Computes the natural square root of a number
 *
 * @n: The number to compute the square root of
 *
 * Return: The natural square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
else
return (_sqrt_helper(n, 1));
}
