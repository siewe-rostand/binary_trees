#include "binary_trees.h"

/**
 * binary_tree_node - function to create a binary tree
 *
 * @parent: pointer to the parent node
 * @value: value to put in new node
 *
 * Return: pointer to new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == null)
		return (NULL);
	newNode->parent = parent;
	newNode->item = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
