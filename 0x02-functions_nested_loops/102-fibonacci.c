#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i, fib_count = 50;
unsigned long int prev = 0, curr = 1, next;
for (i = 1; i <= fib_count; i++)
{
if (i != 1)
{
putchar(',');
putchar(' ');
}
printf("%lu", curr);
next = prev + curr;
prev = curr;
curr = next;
}
putchar('\n');
return (0);
}

