#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
