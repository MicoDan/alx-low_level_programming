#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5] = {98, 402, 19876, 1024, 4096};
int *p;

p = &a[2];
*(p + 1) = 98;
printf("a[2] = %d\n", *(p));
return (0);
}

