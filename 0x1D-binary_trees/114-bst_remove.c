#include "binary_trees.h"

/**
* bst_remove - remove a node from a bst
* @root: the tree
* @value: value of node to remove
* Return: root of the tree
*/

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *plpl = NULL;
	bst_t *leaf;

	leaf = bst_search(root, value);
	if (leaf == NULL)
		return (root);
	if (leaf->left != NULL && leaf->right == NULL)
	{
		for (plpl = leaf->left; plpl->right != NULL; plpl = plpl->right)
			;
		if (plpl != leaf->left)
		{
			plpl->parent->right = plpl->left;
			plpl->left = leaf->left;
		}
		plpl->right = leaf->right, plpl->parent = leaf->parent;
	}
	else if (leaf->right != NULL)
	{
		for (plpl = leaf->right; plpl->left != NULL; plpl = plpl->left)
			;
		if (plpl != leaf->right)
		{
			plpl->parent->left = plpl->right;
			plpl->right = leaf->right;
		}
		plpl->left = leaf->left, plpl->parent = leaf->parent;
	}
	if (leaf->parent != NULL && leaf->parent->right == leaf)
		leaf->parent->right = plpl;
	if (leaf->parent != NULL && leaf->parent->left == leaf)
		leaf->parent->left = plpl;
	free(leaf);
	if (plpl->right != NULL && plpl != NULL)
		plpl->right->parent = plpl;
	if (plpl->left != NULL && plpl != NULL)
		plpl->left->parent = plpl;
	if (plpl->parent == NULL)
		return (plpl);
	return (root);
}

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
