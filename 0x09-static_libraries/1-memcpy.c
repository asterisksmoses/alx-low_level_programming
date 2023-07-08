#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: input value for storage
 * @src: input value where memory is copied
 * @n: no if bytes
 * Return: copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
