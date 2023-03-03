#include "binary_trees.h"

/**
 * binary_tree_nodes - Measures the size of a tree
 *
 * @tree: pointer to the root of tree
 *
 * Return: size of the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node;

	node = 1;
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		node = 0;
	node += binary_tree_node(tree->left);
	node += binary_tree_node(tree->right);

	return (node);
}
