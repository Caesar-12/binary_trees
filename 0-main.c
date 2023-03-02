#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	binary_tree_t *root;

	printf("Creating root...\n");
	root = binary_tree_node(NULL, 98);

	printf("Just created root\n");
	root->left = binary_tree_node(root, 12);
	root->left->left = binary_tree_node(root->left, 6);
	root->left->right = binary_tree_node(root->left, 16);

	root->right = binary_tree_node(root, 402);
	root->right->left = binary_tree_node(root->right, 256);
	root->right->right = binary_tree_node(root->right, 512);

	printf("About to print\n");
	binary_tree_print(root);
	return (0);
}
