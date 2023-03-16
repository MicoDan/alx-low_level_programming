#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to concatenate from s2
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1, len2, i;

/* Treat NULL as an empty string */
if (s1 == NULL) {
s1 = "";
}
if (s2 == NULL) {
s2 = "";
}

/* Get the lengths of the input strings */
len1 = strlen(s1);
len2 = strlen(s2);

/* Use the entire s2 if n >= len2 */
if (n >= len2) {
n = len2;
 }

/* Allocate memory for the result string */
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL) {
return (NULL);
}

/* Copy s1 to the result string */
for (i = 0; i < len1; i++) {
result[i] = s1[i];
}

/* Copy n bytes of s2 to the result string */
for (i = 0; i < n; i++) {
result[len1 + i] = s2[i];
}

/* Add a null terminator to the result string */
result[len1 + n] = '\0';

return (result);
}
