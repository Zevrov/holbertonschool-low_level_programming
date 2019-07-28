#include "binary_trees.h"

/**
* binary_tree_node - adds a new node to a tree
* @parent: parent node, can be NULL
* @value: value for the new node
* Return: new node, Null on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->left = NULL;
	new->parent = parent;
	return (new);
}
