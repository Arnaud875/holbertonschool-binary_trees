#include "binary_trees.h"

/**
 * check_node - Checks if a node and its descendants form a full binary tree
 * @node: A pointer to the current node
 * Return: 1 if the subtree rooted at the node is full, 0 otherwise
 */
int check_node(const binary_tree_t *node)
{
	if (node->left && node->right)
		return (check_node(node->left) && check_node(node->right));
	else if (!node->left && !node->right)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node
 * Return: 1 if full or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (check_node(tree));
}
