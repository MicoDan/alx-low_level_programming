#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: the number of arguments passed into the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
