#include "binary_trees.h"

/**
* binary_tree_depth - find depth of given node
* @tree: node to measure
* Return: depth of node, 0 on failure
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree->parent == NULL || tree == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
