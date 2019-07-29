#include "binary_trees.h"

/**
* binary_tree_is_avl - checks if a btree is an AVLtree
* @tree: the tree
* Return: 1 if AVL, 0 else
*/

int binary_tree_is_avl(binary_tree_t const *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_bst(tree) == 0)
		return (0);

	if (tree->right != NULL)
		r = binary_tree_height(tree->right);

	if (tree->left != NULL)
		l = binary_tree_height(tree->left);

	if ((r - l > l - r ? l - r : r - l) > 1)
		return (0);

	if (tree->right != NULL && binary_tree_is_avl(tree->right) == 0)
		return (0);

	if (tree->left != NULL && binary_tree_is_avl(tree->left) == 0)
		return (0);

	return (1);
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

/**
* binary_tree_is_bst - checks if a tree is sorted like a Bst
* @tree: the tree
* Return: 1 if tree is there and is a Bst, else 0
*/

int binary_tree_is_bst(binary_tree_t const *tree)
{
	char orientation = 'z';

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
	{
		if (tree == tree->parent->left)
			orientation = 'L';
		else
			orientation = 'R';
	}

	if (tree->left != NULL)
	{
		if (binary_tree_is_bst(tree->left) == 0)
			return (0);
		if (tree->left->n >= tree->n)
			return (0);
		if (orientation == 'L' && tree->parent->n <= tree->left->n)
			return (0);
		if (orientation == 'R' && tree->parent->n >= tree->left->n)
			return (0);
	}

	if (tree->right != NULL)
	{
		if (binary_tree_is_bst(tree->right) == 0)
			return (0);
		if (tree->right->n <= tree->n)
			return (0);
		if (orientation == 'L' && tree->parent->n <= tree->right->n)
			return (0);
		if (orientation == 'R' && tree->parent->n >= tree->right->n)
			return (0);
	}

	return (1);
}
