#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as parameter
 * @str: Input value
 * Return: A pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *dup;
	size_t length;

	if (str == NULL)
		return (NULL);

	length = strlen(str);
	dup = (char *)malloc(length + 1);

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}

