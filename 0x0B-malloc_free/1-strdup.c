#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly
 * allocated space in memory
 * @str: input value char
 * Return: 0 each time
 */

char *_strdup(char *str)
{
	char *ccc;
	int x, y = 0;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	ccc = malloc(sizeof(char) * (x + 1));

	if (ccc == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		ccc[y] = str[y];
	return (ccc);
}
