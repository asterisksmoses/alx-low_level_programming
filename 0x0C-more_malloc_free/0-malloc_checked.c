#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: Input value for the nuber of bytes
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *xyz;

	xyz = malloc(sizeof(unsigned int) * b);

	if (xyz == NULL)
		exit(98);

	return (xyz);
}
