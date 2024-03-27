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
	if (tree->left != NULL)
		left_node = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right_node = 1 + binary_tree_height(tree->right);
	return (left_node > right_node ? left_node : right_node);
}
