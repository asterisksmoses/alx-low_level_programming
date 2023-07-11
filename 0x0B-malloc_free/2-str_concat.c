#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: string number one
 * @s2: string number two
 * Return: cconcat of 1 and 2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int x, xy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = xy = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[xy] != '\0')
		xy++;
	conct = malloc(sizeof(char) * (x + xy + 1));

	if (conct == NULL)
		return (NULL);
	x = xy = 0;
	while (s1[x] != '\0')
	{
		conct[x] = s1[x];
		x++;
	}
	while (s2[xy] != '\0')
	{
		conct[x] = s2[xy];
		x++; xy++;
	}
	conct[x] = '\0';
	return (conct);
}
