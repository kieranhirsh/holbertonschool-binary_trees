#include <stddef.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node as the left child
 *                           of another node
 * @parent: a pointer to the parent node
 * @value: the value to be stored at the node
 *
 * Return: a pointer to the new node
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if ((child == NULL) || (parent == NULL))
		return (NULL);

	child->n = value;
	child->parent = parent;
	child->left = NULL;
	child->right = NULL;

	parent->left = child;

	return (child);
}

