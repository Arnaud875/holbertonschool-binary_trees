#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parent: Parent of the node or NULL if it's the head
 * @value: N value for the node
 * Return: Return a pointer of the node or NULL if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!tree)
		return (NULL);

	tree->left = NULL;
	tree->right = NULL;
	tree->parent = parent;
	tree->n = value;

	return (tree);
}
