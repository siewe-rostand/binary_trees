#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: the root node of the tree to measure the height
 *
 * Return: f tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t lt = 0, rt = 0;

	lt = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rt = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (lt > rt)
		return (lt);
	else
		return (rt);
}
