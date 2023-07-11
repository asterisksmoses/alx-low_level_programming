#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of specific chars
 * and initializes it with a specific char
 * @c: input value
 * @size: size of an array
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
