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
	int x = 0, y = 0, z = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (z = 0; z < height; z++)
	{
		grid[z] = malloc(sizeof(int) * width);
		if (grid[z] == NULL)
		{
			for (z = 0; z < height; z++)
			{
				free(grid[z]);
				z++;
			}
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	return (grid);
}
