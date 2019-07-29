#include "binary_trees.h"

/**
 * array_to_heap - array to binary heap
 * @array: array
 * @size: array size
 * Return: the array, null on fail
 */
heap_t *array_to_heap(int *array, size_t size)
{
	bst_t *groot = NULL;
	size_t index = 0;

	if (!array)
		return (NULL);

	while (index < size)
	{
		heap_insert(&groot, array[index]);
		index++;
	}

	return (groot);
}
