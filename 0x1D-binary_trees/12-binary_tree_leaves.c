#include "binary_trees.h"

/**
* binary_tree_leaves - count number of leaves on BTree
* @tree: the tree
* Return: number of leaves, 0 on failure
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	else if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	else
	{
		return (binary_tree_leaves(tree->right) +
				binary_tree_leaves(tree->left));
	}
}
