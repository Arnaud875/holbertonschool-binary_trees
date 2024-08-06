#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: The parent
 * @value: Value of new node
 * Return: The insert node or NULL if failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;

	if (parent->right)
		parent->right->parent = node;
	parent->right = node;

	return (node);
}
