#include "binary_trees.h"

/**
 * rebalance_avl - rebalance an AVL
 * @tree: the tree
 * @gem: side that is unbalanced
 * Return: new tree
 */
avl_t *rebalance_avl(avl_t *tree, int gem)
{
	int balance;

	if (tree->parent == NULL || tree == NULL)
		return (tree);

	if (tree->parent->left == tree && gem == 'x')
		gem = 0x11;

	else if (tree->parent->left == tree && gem == 'y')
		gem = 0x112;

	else if (tree->parent->right == tree && gem == 'y')
		gem = 0x1212;

	else
		gem = 0x121;

	balance = binary_tree_balance(tree->parent);
	if (balance > 1 && gem == 0x11)
		tree = binary_tree_rotate_right(tree->parent);

	else if (balance > 1 && gem == 0x112)
	{
		tree = binary_tree_rotate_left(tree);
		tree = binary_tree_rotate_right(tree->parent);
	}

	else if (balance < -1 && gem == 0x1212)
		tree = binary_tree_rotate_left(tree->parent);

	else if (balance < -1 && gem == 0x121)
	{
		tree = binary_tree_rotate_right(tree);
		tree = binary_tree_rotate_left(tree->parent);
	}

	else
		tree = tree->parent;

	return (tree);
}

/**
* avl_insert - insert a value into an AVL tree, ensuring it remains such
* @tree: tree to modify
* @value: value to insert
* Return: new node containing value, NULL if it couldn't be inserted
*/

avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *leaf, *paternal;
	char gem;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	leaf = *tree;
	while (leaf != NULL && leaf->n != value)
	{
		paternal = leaf;
		if (leaf->n > value)
			gem = 'x', leaf = leaf->left;
		else if (leaf->n < value)
			gem = 'y', leaf = leaf->right;
	}
	if (leaf != NULL)
		return (NULL);
	leaf = malloc(sizeof(*leaf));
	if (leaf == NULL)
		return (NULL);
	leaf->n = value, leaf->parent = paternal;
	leaf->right = NULL, leaf->left = NULL;
	if (gem == 'y')
		paternal->right = leaf;
	else
		paternal->left = leaf;
	if (paternal->parent == *tree)
		*tree = rebalance_avl(paternal, gem);
	else
		rebalance_avl(paternal, gem);
	return (leaf);
}
