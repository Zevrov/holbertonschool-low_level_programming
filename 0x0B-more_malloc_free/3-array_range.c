#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - makes an array
 * @min: the min
 * @max: the max
 * Return: returns the array
 */
int *array_range(int min, int max)
{
	int *new;
	int count = 0;

	if (max < min)
		return (NULL);
	new = malloc(sizeof(int) * (max - min + 1));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	while (min <= max)
	{
		new[count] = min;
		min++;
		count++;
	}
	return (new);
}
