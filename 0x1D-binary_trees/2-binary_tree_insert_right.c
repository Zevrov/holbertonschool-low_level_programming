#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a new node as child right
* @parent: the parent node
* @value: the value of the new node
* Return: the new node, NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = parent->right;
	parent->right = new;
	if (new->right != NULL)
		new->right->parent = new;
	new->left = NULL;
	return (new);
}
