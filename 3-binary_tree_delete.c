#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire tree
 *
 * @tree: Root of tree to delete
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *trav;

	trav = tree;
	if (!trav)
		return;
	binary_tree_delete(trav->left);
	binary_tree_delete(trav->right);
	/*printf("%d\n", tree->n);*/
	free(tree);
}
