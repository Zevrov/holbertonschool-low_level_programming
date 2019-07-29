#include "binary_trees.h"

/**
* binary_tree_rotate_left - sliiide to the left
* @tree: the tree
* Return: new tree
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *groot;

	if (tree == NULL)
		return (NULL);

	groot = tree->right;

	if (groot != NULL)
	{
		tree->right = groot->left;

		if (groot->left != NULL)
			groot->left->parent = tree;

		groot->left = tree;

		if (tree->parent != NULL)
		{
			if (tree->parent->left != tree)
				tree->parent->right = groot;
			else
				tree->parent->left = groot;
		}

		groot->parent = tree->parent;
		tree->parent = groot;
	}

	return (groot);
}
