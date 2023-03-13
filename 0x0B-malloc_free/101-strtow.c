#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, nwords = 0;

if (str == NULL || *str == '\0')
return (NULL);

for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
nwords++;
}

words = malloc((nwords + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0, j = 0; j < nwords; j++)
{
while (str[i] == ' ')
i++;
len = 0;
while (str[i + len] && str[i + len] != ' ')
len++;
words[j] = malloc((len + 1) * sizeof(char));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
free(words[k]);
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
words[j][k] = str[i + k];
words[j][k] = '\0';
i += len;
}
words[j] = NULL;

return (words);
}
