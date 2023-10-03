#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars and
 * initializes it with a specific char
 * @size: size of the array
 * @c: Input value
 * Return: A pointer to the array or NULL of it fails
 */

char *create_array(unsigned int size, char c)
{
	char *xyz;
	unsigned int x;

	xyz = malloc(sizeof(char) * size);
	if (xyz == NULL || size == 0)
		return (NULL);

	for (x = 0; x < size; x++)
		xyz[x] = c;
	return (xyz);
}
