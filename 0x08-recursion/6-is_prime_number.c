#include <stdio.h>

/**
 * is_prime_number - Checks if a number is a prime number
 *
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else if (n <= 3)
return (1);
else if (n % 2 == 0 || n % 3 == 0)
return (0);
else
return (is_prime_helper(n, 5));
}

