#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char
 * @to: pointer to a char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
while (*to != '\0')
{
**s = *to;
(*s)++;
to++;
}
**s = '\0';
}
