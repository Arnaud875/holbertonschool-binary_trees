#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: The parent
 * @value: Value of new node
 * Return: The insert node or NULL if failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = parent->left;
	node->right = NULL;

	if (parent->left)
		parent->left->parent = node;
	parent->left = node;

	return (node);
}
