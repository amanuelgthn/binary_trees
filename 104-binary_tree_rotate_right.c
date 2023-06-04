#include"binary_trees.h"
/**
*binary_tree_rotate_right- function that performs
*a right-rotation on a binary tree
*@tree:a pointer to the root node of the tree to rotate
*Return: a pointer to the new root node of hte tree once rotated
**/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (tree == NULL)
		return (NULL);

	new = tree->left;
	if (new->right)
		new->right->parent = tree;
	new->right = tree;
	tree->parent = new;
	return (new);
}
  
