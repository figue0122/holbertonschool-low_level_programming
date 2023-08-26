#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function name
 * @grid: var
 * @height: var
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0 ; x < height ; x++)
		free(grid[x]);

	free(grid);
}
