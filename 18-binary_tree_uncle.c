#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds a node's uncle
 * @node: a pointer to the node
 *
 * Return: a pointer to the uncle node
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (NULL);
}

