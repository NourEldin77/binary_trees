#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node at the left edge
 * @parent: pointer of tree type to the node
 * @value: value to of node that will be inserted (n)
 * Return: pointer to the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = binary_tree_node(parent, value);

	if (left_node == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = left_node;
	}
	else
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
		parent->left = left_node;
	}
	return (left_node);
}
