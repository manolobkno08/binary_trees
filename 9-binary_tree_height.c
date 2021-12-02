#include "binary_trees.h"

/**
 * binary_tree_height - find the height of a binary tree
 *
 * @tree: Binary Tree
 * Return: Always Success
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (1 + left);

	return (1 + right);
}
