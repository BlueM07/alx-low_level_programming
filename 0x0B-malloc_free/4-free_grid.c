#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free grid
 * @grid: grid
 * @height: height
 */
void free_grid(int **grid, int height)
{
	int c;

	if (grid == NULL || height == 0)
		return;

	for (c = 0; c < height; c++)
		free(grid[c]);

	free(grid);
}
