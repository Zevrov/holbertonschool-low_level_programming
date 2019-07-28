#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a new node as left child of parent
* @parent: the parent of the node
* @value: the value of the node
* Return: new node, NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left != NULL)
		new->left->parent = new;
	return (new);
}
