#include "binary_trees.h"

/**
 * binary_tree_depth - Fuind the depth of the tree
 *
 * @tree: Pointer to the parent node
 * Return: Always Success
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree == NULL)
		return (c);
	while (tree->parent != NULL)
	{
		c++;
		tree = tree->parent;
	}

	return (c);
}
