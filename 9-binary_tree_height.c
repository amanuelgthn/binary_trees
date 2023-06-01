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
