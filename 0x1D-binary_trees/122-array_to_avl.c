#include "binary_trees.h"

/**
* array_to_avl - create a new AVL tree using values from an array
* @array: the array
* @size: size of the array
* Return: new tree, Null on fail
*/

avl_t *array_to_avl(int *array, size_t size)
{
	size_t index = 1;
	avl_t *groot = NULL;

	if (size == 0)
		return (NULL);

	groot = avl_insert(&groot, *array);

	for (; index < size; index++)
		avl_insert(&groot, array[index]);

	return (groot);
}
