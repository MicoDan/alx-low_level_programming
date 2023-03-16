#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory for an array using calloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element
 *
 * Return: a pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

/* Check for zero arguments */
if (nmemb == 0 || size == 0) {
return (NULL);
}

/* Allocate memory for the array */
ptr = calloc(nmemb, size);
if (ptr == NULL) {
return (NULL);
}

/* Zero out the memory */
memset(ptr, 0, nmemb * size);

return (ptr);
}
