#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: Input string value
 * @s2: Input string value
 * Return: 0 each time
 */

char *str_concat(char *s1, char *s2)
{
	int c, sh;
	char *xyz;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	c = 0;
	sh = 0;

        while (s1[c] != '\0')
	{
		xyz[c] = s1[c];
		c++;
	}
	while (s2[sh] != '\0')
	{
		xyz[sh] = s2[sh];
		c++;
		sh++;
	}
	xyz[c] = '\0';
	return (xyz);
}
