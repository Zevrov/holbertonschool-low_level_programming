#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least one child
* @tree: the tree being tested
* Return: index, 0 on fail
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t index = 0;

	if (tree == NULL)
	{
		return (0);
	}

	index = (binary_tree_nodes(tree->right) +
			 binary_tree_nodes(tree->left));

	if (tree->right != NULL || tree->left != NULL)
	{
		index++;
	}

	return (index);
}
