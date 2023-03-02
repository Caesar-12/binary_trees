#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another
 *
 * @parent: Parent of left node to be created
 * @value: Data to be stored in node
 *
 * Return: A pointer to created node or NULL if fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *tmp;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	tmp = parent->left;
	new->n = value;
	new->right = new->left = NULL;
	new->parent = parent;

	if (!parent->left)
		parent->left = new;
	else
	{
		parent->left = new;
		new->left = tmp;
		tmp->parent = new;
	}
	return (new);
}
