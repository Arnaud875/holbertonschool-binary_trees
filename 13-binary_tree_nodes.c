#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the node
 * Return: Size of nodes with at last 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
