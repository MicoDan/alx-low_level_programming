#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: the array of arguments
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len, total_len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len])
len++;
total_len += len + 1;
}

str = malloc(total_len * sizeof(char));
if (str == NULL)
return (NULL);

for (i = 0, j = 0; i < ac; i++)
{
len = 0;
while (av[i][len])
{
str[j] = av[i][len];
len++;
j++;
}
str[j] = '\n';
j++;
}
str[j] = '\0';

return (str);
}
