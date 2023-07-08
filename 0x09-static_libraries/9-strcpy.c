#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: input value to copy to
 * @src: input value to copy from
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

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
