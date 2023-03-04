#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 *
 * @node: pointer to node
 *
 * Return: pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
	{
		if (!node->parent->parent->right)
			return (NULL);
		else
			return (node->parent->parent->right);
	}
	else
	{
		if (!node->parent->parent->left)
			return (NULL);
		else
			return (node->parent->parent->left);
	}
}
