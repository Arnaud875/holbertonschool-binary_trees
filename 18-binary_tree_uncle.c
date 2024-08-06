#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: A pointer to the node
 * Return: A pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *gparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	gparent = node->parent->parent;

	if (gparent->left == parent)
		return (gparent->right);
	else
		return (gparent->left);
}
