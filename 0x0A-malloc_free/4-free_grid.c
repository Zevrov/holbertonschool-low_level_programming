#include "holberton.h"
#include <stdio.h>
#include <sdlib.h>
/**
 * free_grid - frees a grid
 * @grid: the grid
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	int z;

	if (grid == NULL)
		free(grid);
	while (z < height)
	{
		free(grid[z]);
		z++;
	}
	free(grid);
}
