#include "binary_trees.h"

/**
* binary_tree_preorder - go through BT with preorder traversal
* @tree: root of tree
* @func: pointer to function to call
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
