#include"binary_trees.h"
/**
*binary_tree_rotate_left-function that performs
*a left-rotation on a binary tree
*@tree:a pointer to the root node of the tree to rotate
*Return:a pointer to the new root node of the tree once rotated
**/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (tree == NULL)
		return (NULL);
	new->n = tree->right->n;
	new->right = tree->right->right;
	new->left = malloc(sizeof(binary_tree_t));
	new->left->parent = new;
	new->left->n = tree->n;
	new->left->right = tree->right->left;
	new->left->left = tree->left;
	return (new);
}
