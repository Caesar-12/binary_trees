#include "binary_trees.h"

/**
 * binary_tree_node - function to create a binary tree node
 *
 * @parent: Root of sub-tree or main root
 * @value: Data to store in tree node
 *
 * Return: Pointer to new node or NULL if fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!(tmp))
		return (NULL);

	tmp->n = value;
	tmp->left = tmp->right = NULL;
	/*printf("%d\n", tmp->n);*/
	tmp->parent = parent;
	return (tmp);
}
