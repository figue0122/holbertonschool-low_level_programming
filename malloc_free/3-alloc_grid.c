#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function name
 * @width: int var
 * @height: int var
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (x = 0 ; x < height ; x++)
	{
		grid[x] = malloc(width * sizeof(**grid));
		if (grid[x] == NULL)
		{
			for (x-- ; x >= 0 ; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (y = 0 ; y > width ; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
