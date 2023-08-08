#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated
 * space in memory
 * @str: Input string value
 * Return: 0 each time
 */

char *_strdup(char *str)
{
	char *xyz;
	int c, d;

	d = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	c = 0;
	while (str[c] != '\0')
		c++;
	xyz = malloc(sizeof(char) * (c + 1));

	if (xyz == NULL)
	{
		return (NULL);
	}
	for (d = 0; str[d]; d++)
		xyz[d] = str[d];
	return (xyz);
}
