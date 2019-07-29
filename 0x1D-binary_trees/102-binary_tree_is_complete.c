#include "binary_trees.h"

/**
* binary_tree_is_complete - checks if a btree is complete
* @tree: the tree
* Return: 1 complete 0 else
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, idx;
	int vrai;

	if (tree == NULL)
		return (0);

	idx = 0;
	size = binary_tree_size(tree);
	vrai = checker(tree, idx, size);

	return (vrai);
}

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
		return (binary_tree_size(tree->left) +
				binary_tree_size(tree->right) + 1);
	}
}

/**
* checker - check if the btree complete
* @tree: the tree
* @index: where the node is
* @size: size of the tree
* Return: 1 complete 0 else
*/

int checker(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);

	if (index >= size)
		return (0);

	return (checker(tree->left, index * 2 + 1, size) &&
			checker(tree->right, index * 2 + 2, size));
}
