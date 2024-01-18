#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: Input value
 * @max: Input value
 * Return: A pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *xyz;
	int x, y;

	if (min > max)
		return (NULL);
	x = max - min + 1;

	xyz = (int *)malloc(x * sizeof(int));

	if (xyz == NULL)
		return (NULL);
	for (y = 0; y < x; y++)
		xyz[y] = min++;

	return (xyz);
}
