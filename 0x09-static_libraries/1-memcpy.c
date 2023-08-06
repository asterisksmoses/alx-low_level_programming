#include "main.h"

/**
 * _memcpy - Function that copies a specified number of bytes
 * @dest: The memory storage
 * @src: The memory derivative
 * @n: The number of bytes
 * Return: The copied memory value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[y];
		n--;
	}
	return (dest);
}
