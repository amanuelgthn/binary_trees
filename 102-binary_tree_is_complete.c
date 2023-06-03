#include"binary_trees.h"
/**
*binary_tree_size-function that measures the size of a binary tree
*@tree:a pointer to the root node of the ree to measure the size
*Return:the size of the binary_tree or 0 if the tree is NULL
**/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
/**
*binary_tree_is_full-functions that checks if a binary tree is full
*@tree: a pointer to the root node of the tree to be checked
*Return:1 if tree is full or 0 if it is NULL or not full
**/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
/**
*binary_tree_is_complete-function that checks if a binary tree is complete
*@tree:a pointer to the root node of the tree to check
*Return:1 if it is complete or 0 if not or tree is NULL
**/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1)
		return (1);
	else if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);
	return (0);
}
