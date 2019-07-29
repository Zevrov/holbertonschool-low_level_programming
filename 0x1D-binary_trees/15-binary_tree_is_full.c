#include "binary_trees.h"

/**
* binary_tree_is_full - checks if BTree full
* @tree: root node
* Return: 1 = true, 0 = false
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right != NULL &&
		binary_tree_is_full(tree->right) == 0)
		return (0);

	if (tree->left != NULL &&
		binary_tree_is_full(tree->left) == 0)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	return (1);
}
