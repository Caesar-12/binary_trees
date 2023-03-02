#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leafnode
 *
 * @node: Node to check
 *
 * Return: 1 if node is leaf, 0 if othrrwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node->left && !node->right)
		return (1);

	return (0);
}
