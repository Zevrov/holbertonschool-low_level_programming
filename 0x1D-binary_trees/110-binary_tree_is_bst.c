#include "binary_trees.h"
#define NULL ((void *)0)

/**
* binary_tree_is_bst - checks if a tree is sorted like a Bst
* @tree: the tree
* Return: 1 if tree is there and is a Bst, else 0
*/

int binary_tree_is_bst(binary_tree_t const *tree)
{
	char orientation = 'z';

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		if (tree == tree->parent->left)
			orientation = 'L';
		else
			orientation = 'R';
	}

	if (tree->left != NULL)
	{
		if (binary_tree_is_bst(tree->left) == 0)
			return (0);
		if (tree->left->n >= tree->n)
			return (0);
		if (orientation == 'L' && tree->parent->n <= tree->left->n)
			return (0);
		if (orientation == 'R' && tree->parent->n >= tree->left->n)
			return (0);
	}

	if (tree->right != NULL)
	{
		if (binary_tree_is_bst(tree->right) == 0)
			return (0);
		if (tree->right->n <= tree->n)
			return (0);
		if (orientation == 'L' && tree->parent->n <= tree->right->n)
			return (0);
		if (orientation == 'R' && tree->parent->n >= tree->right->n)
			return (0);
	}

	return (1);
}
