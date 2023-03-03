#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a tree
 *
 * @tree: pointer to the root of tree
 *
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 1;
	if (!tree)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	
	return (size);
}
