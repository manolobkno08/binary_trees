#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary Tree
 *
 * @tree: Pointer to the left, right branch until root
 * @func: Func pointer
 * Return: Always Success
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
