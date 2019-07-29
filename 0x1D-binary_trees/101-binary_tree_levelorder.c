#include "binary_trees.h"

/**
* binary_tree_levelorder - use level order on tree
* @tree: tree
* @func: function to call on each node in the tree
*/

void binary_tree_levelorder(binary_tree_t const *tree, void (*func)(int))
{
	size_t tallness, index;

	if (func == NULL || tree == NULL)
		return;

	tallness = binary_tree_height(tree) + 1;

	for (index = 1; index <= tallness; index++)
	{
		make(tree, func, index);
	}
}

/**
* make - prints what's up
* @tree: the tree
* @func: the function
* @deep: the depth of the tree
*/

void make(const binary_tree_t *tree, void (*func)(int), size_t deep)
{
	if (tree == NULL)
		return;

	if (deep == 1)
		func(tree->n);

	else if (deep > 1)
	{
		make(tree->left, func, deep - 1);
		make(tree->right, func, deep - 1);
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

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (r > l)
		return (r + 1);
	else
		return (l + 1);
}
