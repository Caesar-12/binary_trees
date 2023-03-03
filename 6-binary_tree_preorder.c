#include "binary_trees.h"

/**
 * binary_tree_preorder - Prints a tree in preorder format
 *
 * @tree: pointer to root of tree
 * @func: pointer to function to print data in node
 *
 * Rerurn: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
