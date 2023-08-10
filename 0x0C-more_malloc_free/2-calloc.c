#include "main.h"
#include <stdlib.h>

/**
 * _memset - Function that fills memory area with a constant byte
 * @s: The memory area to be filled
 * @b: A char to copy
 * @n: no of times to copy b
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}
	return (s);
}

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: The input array
 * @size: The number of bytes to be allocated
 * Return: A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dhe;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	dhe = malloc(sizeof(unsigned int) * nmemb);

	if (dhe == NULL)
	{
		return (NULL);
	}
	_memset(dhe, 0, nmemb * size);
	return (dhe);
}
