#include "binary_trees.h"

/**
* binary_tree_postorder - traverse BTree using
* postorder depth-first search
* @tree: root of tree
* @func: pointer function to call
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
