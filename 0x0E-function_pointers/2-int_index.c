#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - points to the first match in the array
 * @array: the array
 * @size: the size of array
 * @cmp: the comparing function
 * Return: the first element or -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i <= size)
	{
		if (i == size)
			return (-1);
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (0);
}

