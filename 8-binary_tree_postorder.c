#include "binary_trees.h"

/**
 * binary_tree_postorder - go left go right print (in-order)
 * @tree: pointer of tree type to root node
 * @func: pointer to function of type int (return) to print crr node
 * Return: nothing (void)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
}
