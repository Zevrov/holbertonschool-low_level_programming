#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - allocates mem for a grid
 * @width: the width
 * @height: the height
 * Return: Null or the grid
 */
int **alloc_grid(int width, int height)
{
	int x, y, z;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (; z < height; z++)
	{
		grid[z] = malloc(sizeof(int) * width);
		if (grid[z] == NULL)
		{
			while (z >= 0)
			{
				free(grid[z]);
				z--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	return (grid);
}
