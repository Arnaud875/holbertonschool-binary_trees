#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A Pointer to the root node
 * Return: Height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right;

	if (!tree)
		return (0);

	right = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (right);
}
