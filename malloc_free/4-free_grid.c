#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The height dimension of the grid.
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int Z = 0;

	while (height > Z)
	{
		free(grid[Z]);
		Z++;
	}
		free(grid);
}
