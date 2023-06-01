#include"binary_trees.h"
/**
*binary_tree_height-functioin that measures the height of a binary tree
*@tree:a pointer to the root node of the tree to measure the height
*Return:the height of the binary tree or 0 if tree is NULL
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}
/**
*binary_tree_balance-function that measures the balance factor of a binary tree
*@tree: a pointer to the binary tree to measure the balance factor
*Return: the balance factor of the given node in the binary tree
**/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
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
*binary_tree_is_perfect-function that checks if a binary tree is perfect
*@tree:a pointer to the root of node of the tree to be checked
*Return:1 if the root is perfect or 0 if not and if NULL
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if(binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
	
