#include "main.h"
#include <stdlib.h>

/**
 * _memset - Function that occupies memory with a byte
 * @s: The memory area to be filled
 * @b: Input value
 * @n: Input value
 * Return: A pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

/**
 * _calloc - Function that allocates memoryfor an array
 * @nmemb: The array to be used
 * @size: The size of the array
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *xyz;

	if (nmemb == 0 || size == 0)
		return (NULL);
	xyz = malloc(sizeof(nmemb));
	if (xyz == NULL)
		return (NULL);
	_memset(xyz, 0, nmemb * size);

	return (xyz);
}
