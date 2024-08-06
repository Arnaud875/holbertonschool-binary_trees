#include "binary_trees.h"

/**
 * check_node - Checks if a node and its descendants
 * form a perfect binary tree
 * @node: A pointer to the current node
 * @depth: The depth of the current node
 * @level: The level of the current node
 * Return: 1 if the subtree rooted at the node is perfect or 0
 */
int check_node(const binary_tree_t *node, int depth, int level)
{
	if (!node)
		return (1);

	if (!node->left && !node->right)
		return (depth == level + 1);

	if (!node->left || !node->right)
		return (0);

	return (check_node(node->left, depth, level + 1) &&
			check_node(node->right, depth, level + 1));
}

/**
 * find_depth - Finds the depth of the leftmost leaf
 * @node: A pointer to the root node
 * Return: The depth of the leftmost leaf
 */
int find_depth(const binary_tree_t *node)
{
	int depth = 0;

	while (node)
	{
		depth++;
		node = node->left;
	}

	return (depth);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node
 * Return: 1 if the binary tree is perfect or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (!tree)
		return (0);

	depth = find_depth(tree);
	return (check_node(tree, depth, 0));
}
