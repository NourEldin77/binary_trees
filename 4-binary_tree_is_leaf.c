#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: pointer to node to be checked
 * Return: (1) if node is leaf or (0) if not and if null
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
