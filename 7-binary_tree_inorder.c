#include"binary_trees.h"
/**
**binary_tree_inorder-a function that goes through a binary tree
*using an iorder traversal
*@tree:binary tree to be traversed in order
*@func:a pointer to a function to call for each node
*Do nothing if tree or func is NULL
**/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
