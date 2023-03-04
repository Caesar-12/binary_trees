#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a tree is full
 *
 * @tree: pointer to root of tree
 *
 * Return: 1 if tree is full, 0 if otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int conf = 0, conf2 = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
		conf = binary_tree_is_full(tree->left);
	if (tree->right)
		conf2 = binary_tree_is_full(tree->right);
	return (conf && conf2);
}
