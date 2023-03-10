#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 *
 * Return: 0 (success)
 */
int main(int argc, __attribute__((unused)),char *argv[])
{
printf("%s\n", *argv);
return (0);
}

