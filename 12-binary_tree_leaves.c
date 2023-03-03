#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a tree
 *
 * @tree: pointer to root of tree
 *
 * Return: Number of leaves in tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf;

	leaf = 0;
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		leaf = 1;
		return (leaf);
	}
	leaf += binary_tree_leaves(tree->left);
	leaf += binary_tree_leaves(tree->right);

	return (leaf);
}
