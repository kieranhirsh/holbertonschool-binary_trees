#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a node of a binary tree
 * @tree: a pointer to the node
 *
 * Return: the depth of the node
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if ((tree == NULL) || (tree->parent == NULL))
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
