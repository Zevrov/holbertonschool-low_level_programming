#include "binary_trees.h"

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
