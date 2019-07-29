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

/**
* bst_insert - inserts a value into a BST
* @tree: the tree
* @value: value to insert
* Return: pointer to new node if it worked, else NULL
*/

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *origin;
	bst_t *query;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	origin = *tree;

	while (origin != NULL && origin->n != value)
	{
		query = origin;

		if (value < origin->n)
			origin = origin->left;

		else if (value > origin->n)
			origin = origin->right;
	}
	if (origin != NULL)
		return (NULL);

	if (query->n > value)
		return (binary_tree_insert_left(query, value));

	return (binary_tree_insert_right(query, value));
}
