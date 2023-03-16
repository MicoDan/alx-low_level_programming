#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Check if the string s contains only digits
 * @s: The string to check
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *s)
{
while (*s)
{
if (!isdigit(*s))
return (0);
s++;
}
return (1);
}

/**
 * main - Entry point. Multiplies two positive numbers
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 * Return: 0 if success, 98 if arguments are invalid
 */
int main(int argc, char *argv[])
{
int result;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
