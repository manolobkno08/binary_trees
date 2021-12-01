#include "binary_trees.h"

/**
 * binary_tree_insert_left - Create a node
 *
 * @parent: Pointer to the parent node
 * @value: Value of new node
 * Return: Always Success
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);
	if (new_left_node == NULL)
		return (NULL);

	new_left_node->left = parent->left;

	if (new_left_node->left != NULL)
		new_left_node->left->parent = new_left_node;
	parent->left = new_left_node;

	return (new_left_node);
}
