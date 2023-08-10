#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes
 * Return: A pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int x = 0, y = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		c = malloc(sizeof(char) * (length1 + n + 1));
	else
		c = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!c)
	{
		return (NULL);
	}
	while (x < length2)
	{
		c[x] = s1[x];
		x++;
	}
	while (n < length2 && x < (length1 + n))
		c[x++] = s2[y++];
	while (n >= length2 && x < (length1 + length2))
		c[x++] = s2[y++];
	c[x] = '\0';
	return (c);
}
