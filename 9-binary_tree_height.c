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

	size_t lt = binary_tree_height(tree->left);
	size_t rt = binary_tree_height(tree->right);

	if (lt > rt)
		return (lt + 1);
	else
		return (rt + 1);
}
