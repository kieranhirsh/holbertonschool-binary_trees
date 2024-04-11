#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - finds the height of a binary tree
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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root of the tree
 *
 * Return: 1, if perfect
 *         0, if not perfect
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;
        int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (tree->left != NULL)
		height_l += height_binary_tree(tree->left) + 1;
	if (tree->right != NULL)
		height_r += height_binary_tree(tree->right) + 1;

	if (height_l == height_r)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);

		if (left && right)
			return (1);
		return (0);
	}

	return (0);
}

