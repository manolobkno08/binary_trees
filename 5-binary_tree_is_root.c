#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is a root
 *
 * @node: Node to check
 * Return: Always Success
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}
