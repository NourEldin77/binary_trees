#include "binary_trees.h"

/**
 * binary_tree_preorder - print while go to depth first (pre-order)
 * @tree: pointer of tree type to root node
 * @func: pointer to function of type int (return) to print crr node
 * Return: nothing (void)
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
