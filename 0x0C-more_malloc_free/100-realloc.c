#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the newly allocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

/* Check if new size is zero */
if (new_size == 0) {
free(ptr);
return (NULL);
}

/* Check if pointer is NULL */
if (ptr == NULL) {
return (malloc(new_size));
}

/* Check if old size is equal to new size */
if (old_size == new_size) {
return (ptr);
}

/* Allocate new memory block */
new_ptr = malloc(new_size);
if (new_ptr == NULL) {
return (NULL);
}

/* Copy contents from old memory block to new memory block */
if (new_size > old_size) {
memcpy(new_ptr, ptr, old_size);
} else {
memcpy(new_ptr, ptr, new_size);
}

/* Free old memory block */
free(ptr);

return (new_ptr);
}
