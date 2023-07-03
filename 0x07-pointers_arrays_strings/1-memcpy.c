#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: memory area to be copied
 * @src: input memory area
 * @n: input value
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y = 0;

	while (y < n)
	{
		dest[y] = src[y];
		y++;
	}
	return (dest);
}
