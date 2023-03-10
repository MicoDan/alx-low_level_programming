#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments passed into the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int count = argc - 1; /* exclude the program name from the count */

printf("%d\n", count);

return (0);
}
