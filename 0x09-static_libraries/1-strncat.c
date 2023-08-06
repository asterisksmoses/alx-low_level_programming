#include "main.h"

/**
 * _strncat - Function that concatenates two strings with the use of
 * n bytes from src
 * @dest: The input value
 * @src: The input value
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
