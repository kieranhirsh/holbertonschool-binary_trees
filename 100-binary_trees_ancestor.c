#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a node of a binary tree
 * @tree: a pointer to the node
 *
 * Return: the depth of the node
 *
 */
int depth_binary_tree(const binary_tree_t *tree)
{
        if ((tree == NULL) || (tree->parent == NULL))
                return (0);

        return (depth_binary_tree(tree->parent) + 1);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor
 *
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	int dfirst = 0, dsecond = 0;

	if ((first == NULL) || ((second == NULL)))
		return (NULL);

	if (first->parent != NULL)
		dfirst += depth_binary_tree(first);
	if (second->parent != NULL)
		dsecond += depth_binary_tree(second);

	if (dfirst > dsecond)
		while (dfirst > dsecond)
		{
			first = first->parent;
			dfirst -= 1;
		}
	if (dfirst < dsecond)
		while (dfirst < dsecond)
		{
			second = second->parent;
			dsecond -= 1;
		}

	if (first == second)
		return ((binary_tree_t *)first);

	while (first != second)
	{
		if ((first->parent == NULL) || (second->parent == NULL))
			return (NULL);

		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}
