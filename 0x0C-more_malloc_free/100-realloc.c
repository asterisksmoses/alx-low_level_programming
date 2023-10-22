#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - Function that reallocates a memory block using malloc
 * and free
 * @ptr: A pointer to the previously allocated memory
 * @old_size: The size in bytes of the allocated space
 * @new_size: The new size in bytes for the new memory block
 * Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *xyz;
	unsigned int x;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		xyz = malloc(sizeof(new_size));

		if (xyz == NULL)
		{
			return (NULL);
		}
		return (xyz);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	xyz = malloc(sizeof(new_size));

	if (xyz == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < old_size && x < new_size; x++)
	{
		xyz[x] = ((char *) ptr)[x];
	}

	free(ptr);
	return (xyz);
}
