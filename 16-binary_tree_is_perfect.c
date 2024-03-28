#include "binary_trees.h"

/**
 * binary_tree_size - go left go right print (in-order)
 * @tree: pointer of tree type to root node
 * Return: (0) if null 1 + left subtree + right subtree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}


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
 * binary_tree_is_perfect - check is perfect
 * @tree: pointer of tree type to root node
 * Return: (0) if node is null and (1) if node is not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tree_height = 0, tree_size = 0;

	if (tree == NULL)
		return (0);

	tree_height = binary_tree_height(tree);
	tree_size = binary_tree_size(tree);
	return (tree_size == (size_t)((1 << tree_height) - 1));
}
