#include "binary_trees.h"

/**
* levelorder - recursive function for binary_tree_levelorder
* @tree: tree
* @func: function to call on each node
* @depth: level of nodes
*/

void levelorder(binary_tree_t const *tree,
						void (*func)(int),
						size_t depth)
{
	if (depth == 0)
	{
		func(tree->n);
		return;
	}

	if (tree->left != NULL)
		levelorder(tree->left, func, depth - 1);
	if (tree->right != NULL)
		levelorder(tree->right, func, depth - 1);
}

/**
* binary_tree_levelorder - use level order on tree
* @tree: tree
* @func: function to call on each node in the tree
*/

void binary_tree_levelorder(binary_tree_t const *tree, void (*func)(int))
{
	size_t tallness, index;

	if (tree == NULL)
		return;

	tallness = binary_tree_height(tree);

	for (index = 0; index < tallness; index++)
	{
		levelorder(tree, func, index);
	}
}

/**
* binary_tree_height - measure height of BTree
* @tree: root of tree
* Return: height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int r, l;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);

	if (r > l)
		return (r + 1);
	else
		return (l + 1);
}
