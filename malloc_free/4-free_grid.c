#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * grid previously created by the alloc_grid function.
 *
 * @grid: grid previously created by the alloc_grid function.
 * @height: number of allocated lines to be freed.
 *
 * Return:
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i <= height; i++)
		free(grid[i]);
	free(grid);
}

