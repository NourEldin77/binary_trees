#include "binary_trees.h"

/**
 * binary_tree_height - get the last node and then count
 * @tree: pointer of tree type to root node
 * Return: (0) if node is null and (1) if node is not
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_node = 0, right_node = 0;

	if (tree == NULL)
	{
		return (0);
	}
		left_node = binary_tree_height(tree->left);
		right_node = binary_tree_height(tree->right);
	return (1 + (left_node > right_node ? left_node : right_node));
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer of tree type to root node
 * Return: (0) if node is null and (1) if node is not
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((int)(left_height - right_height));
}

