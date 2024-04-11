#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - finds the number of non-leaf nodes in a binary tree
 * @tree: a pointer to the root of the tree
 *
 * Return: the non-leaf nodes in the tree
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);

	if (tree->left != NULL)
		left += binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		right += binary_tree_nodes(tree->right);

	return (left + right + 1);
}
