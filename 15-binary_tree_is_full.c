#include"binary_trees.h"
/**
*binary_tree_is_full-functions that checks if a binary tree is full
*@tree: a pointer to the root node of the tree to be checked
*Return:1 if tree is full or 0 if it is NULL or not full
**/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (tree->left)
		binary_tree_is_full(tree->left);
	if (tree->right)
		binary_tree_is_full(tree->right);
}
