#include "binary_trees.h"

/**
 * binary_tree_insert_right - Create a right child node
 *
 * @parent: Pointer to the parent node
 * @value: Value of new node
 * Return: Always Success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
		return (NULL);

	new_right_node = binary_tree_node(parent, value);
	if (new_right_node == NULL)
		return (NULL);

	new_right_node->right = parent->right;

	if (new_right_node->right != NULL)
		new_right_node->right->parent = new_right_node;
	parent->right = new_right_node;

	return (new_right_node);
}
