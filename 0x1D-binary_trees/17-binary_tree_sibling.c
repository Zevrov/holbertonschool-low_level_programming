#include "binary_trees.h"

/**
* binary_tree_sibling - deduces the sibling of a node
* @node: the node
* Return: the node's sibling or NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
		return (NULL);

	if (node == node->parent->right)
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
		else
			return (NULL);
	}

	else
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
		else
			return (NULL);
	}
}
