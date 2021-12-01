#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf
 *
 * @node: Node to check
 * Return: Always Success
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
