#include <stdlib.h>
#include "binary_trees.h"

/**
 * height_binary_tree - finds the height of a binary tree
 * @tree: a pointer to the root of the tree
 *
 * Return: the height of the tree
 *
 */
int height_binary_tree(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);

	if (tree->left != NULL)
		height_l += height_binary_tree(tree->left);
	if (tree->right != NULL)
		height_r += height_binary_tree(tree->right);

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
	int height_l = 0, height_r = 0;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);

	if (tree->left != NULL)
		height_l += height_binary_tree(tree->left) + 1;
	if (tree->right != NULL)
		height_r += height_binary_tree(tree->right) + 1;

	return (height_l - height_r);
}
