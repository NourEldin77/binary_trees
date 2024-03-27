#include "binary_trees.h"

/**
 * binary_tree_is_root - check if given node is root
 * @node: pointer to node to be checked
 * Return: (1) if it's root otherwise (0)
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
