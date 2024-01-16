#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a previous 2D array
 * @grid: Input value
 * @height: Input value
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL)
	{
		for (x = 0; x < height; x++)
		{
			free(grid[x]);
		}
		free(grid);
	}
}
