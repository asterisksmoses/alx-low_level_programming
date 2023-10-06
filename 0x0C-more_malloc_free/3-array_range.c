#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that cretaes an array of integers
 * @min: Input value
 * @max: Input value
 * Return: A pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *xyz;
	int c, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	xyz = malloc(sizeof(int) * size);

	if (xyz == NULL)
		return (NULL);

	for (c = 0; min <= max; c++)
		xyz[c] = min++;
	return (xyz);
}
