#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the minimum number of coins to make change for an amount of money
 * @argc: the number of arguments passed into the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: 0 if successful, 1 if error.
 */
int main(int argc, char *argv[])
{
int cents, coins;

if (argc != 2) /* Check the number of arguments */
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]); /* Parse the amount of cents from the argument */

if (cents < 0) /* Check for negative cents */
{
printf("0\n");
return (0);
}

coins = 0;
while (cents > 0)
{
if (cents >= 25) /* Check for quarters */
{
cents -= 25;
coins++;
}
else if (cents >= 10) /* Check for dimes */
{
cents -= 10;
coins++;
}
else if (cents >= 5) /* Check for nickels */
{
cents -= 5;
coins++;
}
else if (cents >= 2) /* Check for pennies */
{
cents -= 2;
coins++;
}
else /* Check for remaining pennies */
{
cents -= 1;
coins++;
}
}

printf("%d\n", coins);

return (0);
}
