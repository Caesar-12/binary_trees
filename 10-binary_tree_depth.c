#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node
 *
 * @tree: pointer to the node
 *
 * Return: Depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
