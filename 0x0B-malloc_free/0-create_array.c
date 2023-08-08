#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates a string and initializes
 * it with a specific char
 * @c: input value char
 * @size: The size of the array
 * Return: NULL if the size of the array is 0 return a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
