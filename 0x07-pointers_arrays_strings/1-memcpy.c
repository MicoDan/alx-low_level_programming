#include <stdio.h>

/**

_memcpy - copies n bytes from memory area src to memory area dest

@dest: destination memory area

@src: source memory area

@n: number of bytes to copy

Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
}
