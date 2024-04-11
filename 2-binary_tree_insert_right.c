#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a binary tree node as the right child
 *                           of another node
 * @parent: a pointer to the parent node
 * @value: the value to be stored at the node
 *
 * Return: a pointer to the new node
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if ((child == NULL) || (parent == NULL))
	{
		free(child);
		return (NULL);
	}

	child->n = value;
	child->parent = parent;
	child->left = NULL;
	if (parent->right != NULL)
	{
		child->right = parent->right;
		child->right->parent = child;
	}
	else
	{
		child->right = NULL;
	}

	parent->right = child;

	return (child);
}

