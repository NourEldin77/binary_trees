#include "binary_trees.h"

/**
 * binary_tree_inorder - go left print go right (in-order)
 * @tree: pointer of tree type to root node
 * @func: pointer to function of type int (return) to print crr node
 * Return: nothing (void)
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		(*func)(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

