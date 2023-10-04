#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2D grid
 * @grid: The grid to be freed
 * @height: The height of the grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
