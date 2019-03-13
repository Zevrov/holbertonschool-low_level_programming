#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates through an array
 * @array: the array
 * @size: the size of the array
 * @action: the function for the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
