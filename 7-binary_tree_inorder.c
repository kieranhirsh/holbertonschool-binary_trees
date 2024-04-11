#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree in inorder traversal
 * @tree: a pointer to the tree
 * @func: a function that prints the node
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		if (tree->left != NULL)
			binary_tree_inorder(tree->left, func);

		func(tree->n);

		if (tree->right != NULL)
			binary_tree_inorder(tree->right, func);
	}
}
