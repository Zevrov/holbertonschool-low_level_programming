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
	int x = 0;
	int **grid;
	int *line;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	line = malloc(sizeof(int) * height * width);
	if (line == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (; x < height; x++)
		grid[x] = line + x * width;
	for (x = 0; x < height * width; x++)
		line[x] = 0;
	return (grid);
}
