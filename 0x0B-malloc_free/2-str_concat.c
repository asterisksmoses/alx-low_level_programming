#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: A pointer to the newly allocated memory otherwise return null
 */

char *str_concat(char *s1, char *s2)
{
	int x, ef;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0;
	ef = 0;

	while (s1[x] != '\0')
		x++;
	while (s2[ef] != '\0')
		ef++;
	conc = malloc(sizeof(char) * (x + ef + 1));
	if (conc == NULL)
		return (NULL);
	x = 0;
	ef = 0;

	while (s1[x] != '\0')
	{
		conc[x] = s1[x];
		x++;
	}
	while (s2[x] != '\0')
	{
		conc[x] = s2[ef];
		x++, ef++;
	}
	conc[x] = '\0';
	return (conc);
}
