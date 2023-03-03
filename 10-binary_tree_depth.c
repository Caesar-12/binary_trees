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
	binary_tree_t *trav;
	size_t depth;

	trav = tree;
	depth = 0;
	if (!tree)
		return (0);

	while (trav)
	{
		trav = trav->parent;
		depth++;
	}
	return (depth);
}
