#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;

typedef struct binary_tree_s avl_t;

typedef struct binary_tree_s heap_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_print(const binary_tree_t *);
int binary_tree_is_leaf(const binary_tree_t *node);
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(binary_tree_t const *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int size_comparer(int a, int b);
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(binary_tree_t const *first,
									 binary_tree_t const *second);
void binary_tree_levelorder(binary_tree_t const *tree, void (*func)(int));
void levelorder(binary_tree_t const *tree,
						void (*func)(int),
						size_t depth);
int binary_tree_is_complete(binary_tree_t const *tree);
int binary_tree_is_bst(binary_tree_t const *tree);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(bst_t const *tree, int value);
bst_t *bst_remove(bst_t *root, int value);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_avl(binary_tree_t const *tree);
avl_t *avl_insert(avl_t **tree, int value);
avl_t *rebalance_avl(avl_t *tree, int side);
int bst_helper(const binary_tree_t *tree, int lowest, int highest);
int tree_null(const binary_tree_t *tree);
void make(const binary_tree_t *tree, void (*func)(int), size_t deep);
int checker(const binary_tree_t *tree, size_t index, size_t size);
avl_t *array_to_avl(int *array, size_t size);
heap_t *array_to_heap(int *array, size_t size);

#endif /* binary_trees_h */
