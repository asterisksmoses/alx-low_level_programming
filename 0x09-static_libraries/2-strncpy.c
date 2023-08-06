#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
