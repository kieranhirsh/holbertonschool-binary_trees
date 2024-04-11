#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: a pointer to the root of the tree
 *
 * Return: the size of the tree
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left += binary_tree_size(tree->left);
	if (tree->right != NULL)
		right += binary_tree_size(tree->right);

	return (left + right + 1);
}
