#include "binary_trees.h"

/**
* binary_tree_depth - find depth of given node
* @tree: le node
* Return: depth of node, 0 on fail
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *old;
	size_t count = 0;

	if (tree == NULL)
		return (0);

	for (old = tree->parent; old != NULL; old = old->parent)
		count++;

	return (count);
}
