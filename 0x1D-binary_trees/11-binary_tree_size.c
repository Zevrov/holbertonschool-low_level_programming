#include "binary_trees.h"

/**
* binary_tree_size - counts the nodes in a Btree
* @tree: the tree
* Return: number of nodes in the tree
*/

size_t binary_tree_size(binary_tree_t const *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		return (binary_tree_size(tree->right) +
				binary_tree_size(tree->left) + 1);
	}
}
