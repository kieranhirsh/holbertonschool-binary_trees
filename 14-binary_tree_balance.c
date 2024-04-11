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
	size_t height_l = 0, height_r = 0;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);

	if (tree->left != NULL)
		height_l += binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_r += binary_tree_height(tree->right);

	if (height_l < height_r)
		return (height_r + 1);
	return (height_l + 1);
}

/**
 * binary_tree_balance - calculates the balance factor of a binary tree
 * @tree: a pointer to the root of the tree
 *
 * Return: the balance factor of the tree
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);

	if (tree->left != NULL)
		height_l += binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		height_r += binary_tree_height(tree->right) + 1;

	return (height_l - height_r);
}
