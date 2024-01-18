#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: Number of bytes for s2
 * Return: A pointer to the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_1 = 0, len_2 = 0, res = 0;
	unsigned int x, y;
	char *xyz;

	if (s1 == NULL)
		s1 = "";
	while (s1[len_1] != '\0')
		len_1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[len_2] != '\0')
		len_2++;
	res = len_1 + n;
	xyz = (char *)malloc(res + 1);

	if (xyz == NULL)
	{
		exit(EXIT_FAILURE);
	}
	for (x = 0; x < len_1; x++)
		xyz[x] = s1[x];
	for (y = 0; y < len_2; y++)
		xyz[len_1 + y] = s2[y];
	return (xyz);
}
