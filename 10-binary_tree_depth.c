#include "binary_trees.h"

/**
 * binary_tree_depth - get tree depth
 * @tree: pointer of tree type to root node
 * Return: (0) if node is null and (1) if node is not
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree ==	NULL || tree->parent == NULL)
		return (0);
	return (1 +  binary_tree_depth(tree->parent));
}

