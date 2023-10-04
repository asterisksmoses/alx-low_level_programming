#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2D array of
 * integers
 * @width: The width if the array
 * @height: The height of the array
 * Return: A pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int c, d;
	int **xyz;

	if (width <= 0 || height <= 0)
		return (NULL);
	xyz = malloc(sizeof(int *) * height);
	if (xyz == NULL)
		return (NULL);
	for (c = 0; c < height; c++)
	{
		xyz[c] = malloc(sizeof(int) * width);
		if (xyz[c] == NULL)
		{
			for (; c >= 0; c--)
				free(xyz[c]);
			free(xyz);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			xyz[c][d] = 0;
	}
	return (xyz);
}
