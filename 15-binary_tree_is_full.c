#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer of tree type to root node
 * Return: (0) if node is null and (1) if node is not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

