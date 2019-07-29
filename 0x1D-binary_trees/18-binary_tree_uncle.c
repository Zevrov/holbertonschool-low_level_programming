#include "binary_trees.h"

/**
* binary_tree_uncle - find sibling of node parent
* @node: the node siblings are being found for
* Return: the uncle node, NULL on failures
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent->parent == NULL || node->parent == NULL || node == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
