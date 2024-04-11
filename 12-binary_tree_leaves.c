#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - finds the number of leaves in a binary tree
 * @tree: a pointer to the root of the tree
 *
 * Return: the number of leaves in the tree
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (tree->left != NULL)
		left += binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		right += binary_tree_leaves(tree->right);

	return (left + right);
}
