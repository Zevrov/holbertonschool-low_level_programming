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

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
