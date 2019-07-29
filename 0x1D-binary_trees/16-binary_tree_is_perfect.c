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
* binary_tree_is_perfect - checks if tree is perfect
* @tree: the tree
* Return: 1 = true, 0 = false
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (binary_tree_balance(tree) != 0)
		return (0);

	if (tree->right != NULL &&
		binary_tree_is_perfect(tree->right) == 0)
		return (0);

	if (tree->left != NULL &&
		binary_tree_is_perfect(tree->left) == 0)
		return (0);

	return (1);
}
