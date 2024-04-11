#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root of the tree
 *
 * Return: 1, if full
 *         0, otherwise
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (tree->left != NULL)
		left = binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		right = binary_tree_nodes(tree->right);

	if (left && right)
		return (1);
	return (0);
}
