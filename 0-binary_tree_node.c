#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 * @parent: pointer of tree type to parent if exist
 * @value: value to of node (n)
 * Return: pointer to created node
 */



binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	node->n = value;
	return (node);
}
