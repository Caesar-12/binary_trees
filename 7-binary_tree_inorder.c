#include "binary_trees.h"

/**
 * binary_tree_inorder - Prints a tree in inorder format
 *
 * @tree: pointer to root of tree
 * @func: pointer to function to print data in node
 *
 * Rerurn: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
