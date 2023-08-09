#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Function that frees a 2D grid
 * @grid: The actual grid
 * @height: The height dimensions of the grid
 * Return: nothing
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
