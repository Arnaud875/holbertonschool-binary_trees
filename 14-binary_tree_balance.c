#include "binary_trees.h"

/**
 * binary_tree_height_ - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: The height of the tree
 */
int binary_tree_height_(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_(tree->left);
	right_height = binary_tree_height_(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the node
 * Return: The balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = (tree->left ? binary_tree_height_(tree->left) : -1);
	right_height = (tree->right ? binary_tree_height_(tree->right) : -1);

	return (left_height - right_height);
}
