#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node
 * Return: A pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return ((node->parent->right && node->parent->right->n != node->n)
				? node->parent->right
				: node->parent->left);
}
