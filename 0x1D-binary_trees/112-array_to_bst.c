#include "binary_trees.h"

/**
* array_to_bst - fill a new bst with values from an array
* @array: pointer to array
* @size: array size
* Return: root of tree
*/

bst_t *array_to_bst(int *array, size_t size)
{
	size_t index;
	bst_t *groot = NULL;

	if (size == 0)
		return (NULL);

	groot = bst_insert(&groot, *array);

	for (index = 0; index < size; index++)
	{
		bst_insert(&groot, array[index]);
	}

	return (groot);
}
