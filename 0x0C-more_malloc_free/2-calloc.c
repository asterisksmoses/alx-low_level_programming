#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: The number of elements in the array
 * @size: The size of the array
 * Return: A pointer to the newly alloacted memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t res;
	void *xyz;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = nmemb * size;

	xyz = malloc(sizeof(res));

	if (xyz == NULL)
		return (NULL);
	memset(xyz, 0, res);

	return (xyz);
}

