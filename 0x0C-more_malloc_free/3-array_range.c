#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an rray of integers
 * @min: The first array
 * @max: The second array
 * Return: A pointer to the new array
 */

int *array_range(int min, int max)
{
	int *xyz;
	int d, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	xyz = malloc(sizeof(int) * size);

	if (xyz == NULL)
	{
		return (NULL);
	}
	for (d = 0; min <= max; d++)
		xyz[d] = min++;
	return (xyz);
}
