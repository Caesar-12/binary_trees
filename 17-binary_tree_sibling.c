#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 *
 * @node: pointer to node
 *
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left->n == node->n)
	{
		if (!node->parent->right)
			return (NULL);
		else
			return (node->parent->right);
	}
	else
	{
		if (!node->parent->left)
			return (NULL);
		else
			return (node->parent->left);
	}
}
