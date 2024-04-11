#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a binary tree
 * @tree: a pointer to the root of the tree
 *
 * Return: the height of the tree
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_l = 1, height_r = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_l += binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_r += binary_tree_height(tree->right);

	if (height_l < height_r)
		return (height_r);
	return (height_l);
}
