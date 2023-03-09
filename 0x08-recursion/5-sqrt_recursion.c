#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);  /* Return -1 for negative numbers */
}

if (n == 0 || n == 1)
{
return (n);  /* Return n for 0 and 1 */
}

/* Recursively calculate the square root of n/4 */
int root = _sqrt_recursion(n / 4);

/* If the square of the calculated root is equal to n, return root */
if (root * root == n)
{
return (root);
}
/* If not, check the next odd integer as a possible root */
else if ((root + 1) * (root + 1) <= n && (root + 1) <= n / (root + 1))
{
return (root + 1);
}
/* If neither condition is met, n doesn't have a natural square root */
else
{
return (-1);
}
}

