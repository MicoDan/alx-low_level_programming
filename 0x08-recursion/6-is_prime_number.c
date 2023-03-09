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


