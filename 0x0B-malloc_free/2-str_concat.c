#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: A pointer to the newly allocated space in memory,
 * NULL upon faliure
 */

char *str_concat(char *s1, char *s2)
{
	char *sc;
	unsigned int len_1 = 0, len_2 = 0, x = 0, y = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	while (s1[len_1] != '\0')
		len_1++;
	while (s2[len_2] != '\0')
		len_2++;

	sc = malloc(len_1 + len_2 + 1);

	if (sc == NULL)
		return (NULL);

	while (x < len_1)
	{
		sc[x] = s1[x];
		x++;
	}
	while (y < len_2)
	{
		sc[x + y] = s2[y];
		y++;
	}
	sc[x + y] = '\0';
	return (sc);
}
