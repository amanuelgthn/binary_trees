#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/* Our own functions */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	root->right = binary_tree_node(root, 110);
	root->right->right = binary_tree_node(root->right, 120);

	binary_tree_print(root);

	root = binary_tree_rotate_left(root);

	binary_tree_print(root);
	return (0);
}