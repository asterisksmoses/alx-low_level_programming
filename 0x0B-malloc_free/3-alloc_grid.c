#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2D array
 * of integers
 * @width: The width of the array
 * @height: The height of the array
 * Return: A pointer to the array or NULL on faliure
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(width * sizeof(int));
		if (ptr[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(ptr[y]);
			}
		}
		free(ptr);
		return (NULL);
	}
	for (y = 0; y < width; y++)
	{
		ptr[x][y] = 0;
	}
	return (ptr);
}
