#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child
 * @tree: pointer of tree type to root node
 * Return: (0) if node is null and (1) if node is not
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i;

	if (tree == NULL)
		return (0);

	i = (tree->right || tree->left) ? 1 : 0;

	return (i + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
