#include "binary_tree.h"

/**
 * binary_tree_balance - function that measures the balance factor
 *
 * @tree: node to measure the balance factor
 *
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0;

	if (tree)
	{
		int lt = binary_tree_height(tree->left);
		int rt = binary_tree_height(tree->right);

		return (lt - rt);
	}

	return (r);
}



/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: the root node of the tree to measure the height
 *
 * Return: f tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lt = 0, rt = 0;

		lt = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rt = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		if (lt > rt)
			return (lt);
		else
			return (rt);
	}
	return (0);
}
