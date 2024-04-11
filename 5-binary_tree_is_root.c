#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root
 * @node: a pointer to the node
 *
 * Return: 1, if root
 *         0, otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
