#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2-dimensional grid previously
 * created by alloc_grid.
 * @grid: The 2D grid to be freed.
 * @height: The height dimension of the grid.
 *
 * Description: This function frees the memory allocated
 *  for a 2D grid
 * previously created by the alloc_grid
 * function.
 */
void free_grid(int **grid, int height)
{
	int Z;

	if (grid != NULL)
	{
		for (Z = 0; height > Z; Z++)
		{
			free(grid[Z]);
		}
		free(grid);
	}
}
