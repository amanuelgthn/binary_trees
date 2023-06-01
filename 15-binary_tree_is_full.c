#include"binary_trees.h"
/**
*binary_tree_is_full-functions that checks if a binary tree is full
*@tree: a pointer to the root node of the tree to be checked
*Return:1 if tree is full or 0 if it is NULL or not full
**/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (tree == NULL)
		return (0);
	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);
	if (left_full && right_full)
		return (1);
	else
		return(0);
}
