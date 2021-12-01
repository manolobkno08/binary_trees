#include "binary_trees.h"

/**
 * binary_tree_delete - Delete Binary Tree
 *
 * @tree: Get a tree to be deleted
 * Return: Always Success
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
