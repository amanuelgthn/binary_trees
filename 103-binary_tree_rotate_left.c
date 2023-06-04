#include"binary_trees.h"
/**
*binary_tree_delete-function that deletes an entire binary tree
*@tree:a pointer to the root node of the tree to delete
**/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
/**
*binary_tree_rotate_left-function that performs
*a left-rotation on a binary tree
*@tree:a pointer to the root node of the tree to rotate
*Return:a pointer to the new root node of the tree once rotated
**/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	binary_tree_t *new = tree->right;

	tree->right = new->left;
	if (new->left)
		new->left->parent = tree;
	new->left = tree;
	tree->parent = new;
	return (new);
}
