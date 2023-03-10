#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments passed into the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

/* Check for the correct number of arguments */
if (argc != 3)
{
printf("Error\n");
return (1);
}

/* Convert the arguments from strings to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

/* Multiply the two numbers */
result = num1 * num2;

/* Print the result */
printf("%d\n", result);

return (0);
}
