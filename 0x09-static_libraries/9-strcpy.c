#include "main.h"

/**
 * char *_strcpy - A function that copies a string
 * @dest: Input value to copy to
 * @src: Input value to copy from
 * Return: The string value
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0, y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
