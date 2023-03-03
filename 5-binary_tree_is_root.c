#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is root
 *
 * @node: Pointer to node to chrck
 *
 * Return: 1 if node is root, 0 if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);

	return (0);
}