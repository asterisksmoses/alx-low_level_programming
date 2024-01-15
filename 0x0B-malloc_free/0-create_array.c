#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of characters
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: Input value
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *xyz = malloc(size + 1);
	char *ptr = xyz;

	if (xyz == NULL || size == 0)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		xyz[x] = c;
	}

	xyz[size] = '\0';

	return (ptr);
}
