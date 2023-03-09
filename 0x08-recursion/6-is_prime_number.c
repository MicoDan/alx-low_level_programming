#include <stdio.h>
/**
 * is_prime_number - Determines if a number is prime.
 *
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);

return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to recursively check if a number is prime.
 *
 * @n: The number to check.
 * @i: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
if (n % i == 0)
return (0);
if (i * i > n)
return (1);

return (is_prime_helper(n, i + 1));
}


