#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments passed into the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: 0 if successful, 1 if error.
 */
int main(int argc, char *argv[])
{
int i, j, sum;

if (argc < 2) /* No number passed to the program */
{
printf("0\n");
return (0);
}

sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j])) /* Check for non-digit characters */
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]); /* Convert and add the number to sum */
}

printf("%d\n", sum);

return (0);
}
