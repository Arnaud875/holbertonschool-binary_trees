#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree
 * using post-order traversal
 * @tree: A pointer to the root node
 * @func: The callback fonction
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
