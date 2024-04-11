#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a node's sibling
 * @node: a pointer to the node
 *
 * Return: a pointer to the sibling node
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}

