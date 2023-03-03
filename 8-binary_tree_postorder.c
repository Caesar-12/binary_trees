#include "binary_trees.h"

/**
 * binary_tree_postorder - Prints a tree in inorder format
 *
 * @tree: pointer to root of tree
 * @func: pointer to function to print data in node
 *
 * Rerurn: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
