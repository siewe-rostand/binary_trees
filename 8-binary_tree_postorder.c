#include "binary_trees.h"

/**
 * binary_tree_postorder - function for post-order traversal
 *
 * @tree: root node of the tree to traverse
 * @func: function to call for each node.
 *
 * Return: NULL if tree or func are null
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
