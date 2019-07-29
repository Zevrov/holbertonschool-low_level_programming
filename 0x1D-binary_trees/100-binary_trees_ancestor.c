#include "binary_trees.h"

/**
* binary_trees_ancestor - finds lowest common ancestor of two tree nodes
* @first: node1
* @second: node2
* Return: lowest common ancestor, NULL if there is none
*/

binary_tree_t *binary_trees_ancestor(binary_tree_t const *first,
									 binary_tree_t const *second)
{
	binary_tree_t const *p1, *p2;
	size_t d1, d2;

	if (second == NULL || first == NULL)
		return (NULL);

	d2 = binary_tree_depth(second);
	d1 = binary_tree_depth(first);

	p1 = first;
	p2 = second;

	while (d2 < d1)
	{
		p1 = p1->parent;
		d1--;
	}

	while (d2 > d1)
	{
		p2 = p2->parent;
		d2--;
	}

	while (p2 != NULL && p1 != NULL)
	{
		if (p2 == p1)
			return ((binary_tree_t *)p1);

		p2 = p2->parent;
		p1 = p1->parent;
	}

	return (NULL);
}

/**
* binary_tree_depth - find depth of given node
* @tree: le node
* Return: depth of node, 0 on fail
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *old;
	size_t count = 0;

	if (tree == NULL)
		return (0);

	for (old = tree->parent; old != NULL; old = old->parent)
		count++;

	return (count);
}
