#include "binary_trees.h"


/**
* binary_tree_is_bst - checks if a tree is sorted like a Bst
* @tree: the tree
* Return: 1 if tree is there and is a Bst, else 0
*/

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int groot = 0;

	groot = tree_null(tree);
	if (groot == 1)
		return (0);

	return (bst_helper(tree, INT_MIN, INT_MAX));
}

/**
* bst_helper - helps btib function
* @tree: the tree
* @lowest: int lowest
* @highest: int highest
* Return: 1 if true 0 if false
*/

int bst_helper(const binary_tree_t *tree, int lowest, int highest)
{
	int groot = 0;

	groot = tree_null(tree);
	if (groot == 1)
		return (1);

	if (tree->n >= highest || tree->n <= lowest)
		return (0);

	return ((bst_helper(tree->left, lowest, tree->n)) &&
			(bst_helper(tree->right, tree->n, highest)));
}

/**
* tree_null - tells if a tree is null
* @tree: the tree
* Return: 1 or 0
*/

int tree_null(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	return (0);
}
