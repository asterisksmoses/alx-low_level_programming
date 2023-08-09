#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a 2D array of integers
 * @width: Input value
 * @height: Input value
 * Return: A pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int **ycd;
	int f, z;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ycd = malloc(sizeof(int *) * height);

	if (ycd == NULL)
		return (NULL);
	for (f = 0; f < height; f++)
	{
		ycd[f] = malloc(sizeof(int) * width);

		if (ycd[f] == NULL)
		{
			for (; f >= 0; f--)
				free(ycd[f]);
			free(ycd);
			return (NULL);
		}
	}

	for (f = 0; f < width; f++)
	{
		for (z = 0; z < width; z++)
			ycd[f][z] = 0;
	}
	return (ycd);
}
