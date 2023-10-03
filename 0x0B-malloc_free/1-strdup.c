#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to newly allocated
 * space in memory
 * @str: Input value
 * Return: A pointer on success, NULL if not
 */

char *_strdup(char *str)
{
	char *xyz;
	int x, y;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;
	xyz = malloc(sizeof(char) * (x + 1));

	if (xyz == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		xyz[y] = str[y];
	return (xyz);
}

