#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int a[5] = {0, 1, 2, 3, 4};
int *p;

p = &a[2];
*p = 98;

/* add your code here */
printf("a[2] = %d\n", *(p));

return (0);
}
