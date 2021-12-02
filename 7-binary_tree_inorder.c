#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary Tree
 *
 * @tree: Pointer to the left branch and goes to the right branch
 * @func: Func pointer
 * Return: Always Success
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
