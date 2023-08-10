#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function that reallocates a memory block
 * @ptr: Is a pointer to the prevoius memory allocation
 * @old_size: The size of the previously allocated memory
 * @new_size: The size in bytes for the new memory block
 * Return: A pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *xyz;
	char *old;
	unsigned int c;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	xyz = malloc(new_size);
	if (!xyz)
		return (NULL);
	old = ptr;
	if (new_size < old_size)
	{
		for (c = 0; c < new_size; c++)
			xyz[c] = old[c];
	}
	if (new_size > old_size)
	{
		for (c = 0; c < old_size; c++)
			xyz[c] = old[c];
	}
	free(ptr);
	return (xyz);
}
