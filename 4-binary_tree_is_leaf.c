#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if a node is a leaf
 *
 * @node: node to be check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
