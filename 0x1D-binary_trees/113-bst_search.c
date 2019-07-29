#include "binary_trees.h"

/**
* bst_search - search for values in a bst
* @tree: the tree
* @value: the search
* Return: node containing the search or NULL
*/

bst_t *bst_search(bst_t const *tree, int value)
{
	bst_t const *leaf;

	leaf = tree;

	while (leaf != NULL && leaf->n != value)
	{
		if (value > leaf->n)
			leaf = leaf->right;

		else if (value < leaf->n)
			leaf = leaf->left;
	}

	return ((bst_t *)leaf);
}
