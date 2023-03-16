#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}

/**
 * print_error - prints an error message and exits with a status of 98
 */
void print_error(void)
{
printf("Error\n");
exit(98);
}

/**
 * multiply - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 *
 * Return: the product of num1 and num2
 */
unsigned long int multiply(unsigned int num1, unsigned int num2)
{
unsigned long int result = 0;
while (num2 > 0)
{
result += num1 * (num2 % 10);
num2 /= 10;
num1 *= 10;
}
return (result);
}

/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
unsigned int num1, num2;
unsigned long int product;

if (argc != 3)
print_error();

for (int i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j] != '\0'; j++)
{
if (!_isdigit(argv[i][j]))
print_error();
}
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
product = multiply(num1, num2);

printf("%lu\n", product);

return (0);
}
