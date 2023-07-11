#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: width input
 * @height: height input value
 * Return: pointer to 2 Dim. array
 */

int **alloc_grid(int width, int height)
{
	int **ccc;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	ccc = malloc(sizeof(int *) * height);

	if (ccc == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ccc[x] = malloc(sizeof(int) * width);
		if (ccc[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ccc[x]);
			free(ccc);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ccc[x][y] = 0;
	}
	return (ccc);
}
