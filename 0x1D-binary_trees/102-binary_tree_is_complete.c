#include "binary_trees.h"

/**
* size_comparer - returns the larger thing
* @a: thing 1
* @b: thing 2
* Return: the larger thing
*/

int size_comparer(int a, int b)
{
	return (a >= b ? a : b);
}

/**
* binary_tree_height - find height of the tree
* @tree: the tree
* Return: tree height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (size_comparer(binary_tree_height(tree->right),
			binary_tree_height(tree->left)) + 1);
}

/**
* binary_tree_balance - balance of tree
* @tree: the tree
* Return: balance
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
}

/**
* binary_tree_is_complete - checks if the btree is complete
* @tree: the tree
* Return: 0 if not all subs are weighted to the left, 1 if they are
*/

int binary_tree_is_complete(binary_tree_t const *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) < 0 && tree->parent == NULL)
		return (0);

	if (tree->right != NULL)
	{
		if (binary_tree_balance(tree->right) != 0
			|| binary_tree_is_complete(tree->right) == 0)
			return (0);
	}

	if (tree->left != NULL)
	{
		if (binary_tree_balance(tree->left) < 0
			|| binary_tree_is_complete(tree->left) == 0)
			return (0);
	}

	return (1);
}
