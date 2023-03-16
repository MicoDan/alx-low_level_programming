#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: a pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
int *array, i, size;

/* Check for invalid input */
if (min > max) {
return (NULL);
}

/* Calculate the size of the array */
size = max - min + 1;

/* Allocate memory for the array */
array = malloc(sizeof(int) * size);
if (array == NULL) {
return (NULL);
}

/* Populate the array with values from min to max */
for (i = 0; i < size; i++) {
array[i] = min + i;
}

return (array);
}
