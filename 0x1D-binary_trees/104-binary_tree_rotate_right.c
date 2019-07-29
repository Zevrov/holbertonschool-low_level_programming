#include "binary_trees.h"

/**
* binary_tree_rotate_right - sliiide to the right
* @tree: the tree
* Return: new tree
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *groot;

	if (tree == NULL)
		return (NULL);

	groot = tree->left;

	if (groot != NULL)
	{
		tree->left = groot->right;

		if (groot->right != NULL)
			groot->right->parent = tree;

		groot->right = tree;

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
