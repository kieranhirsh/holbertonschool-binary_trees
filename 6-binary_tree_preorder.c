#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree in preorder traversal
 * @tree: a pointer to the tree
 * @func: a function that prints the node
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		func(tree->n);

		if (tree->left != NULL)
			binary_tree_preorder(tree->left, func);

		if (tree->right != NULL)
			binary_tree_preorder(tree->right, func);
	}
}
