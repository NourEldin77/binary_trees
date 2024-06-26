#include "binary_trees.h"

/**
 * binary_tree_leaves - count all leaves in given tree
 * @tree: pointer of tree type to root node
 * Return: (0) if node is null and (1) if node is not
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

