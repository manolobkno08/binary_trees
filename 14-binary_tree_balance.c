#include "binary_trees.h"

/**
 * binary_tree_balance_t - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * @tree_t: pointer to the subtree
 * Return: balance factor
 */
size_t binary_tree_balance_t(const binary_tree_t *tree,
						    const binary_tree_t *tree_t)
{
	int counter = 0, counter2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		counter += binary_tree_balance_t(tree->left, tree_t);
	if (tree->right != NULL)
		counter2 += binary_tree_balance_t(tree->right, tree_t);
	if (tree == tree_t)
		return (counter - counter2);
	if (counter > counter2)
		return (counter + 1);
	return (counter2 + 1);
}

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_balance_t(tree, tree));
}
