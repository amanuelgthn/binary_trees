#include"binary_trees.h"
/**
*binary_tree_height-functioin that measures the height of a binary tree
*@tree:a pointer to the root node of the tree to measure the height
*Return:the height of the binary tree or 0 if tree is NULL
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
		return (0);
	if(tree->left != NULL)
	{
		left += 1;
		binary_tree_height(tree->left);
	}
	if(tree->right != NULL)
	{
		right += 1;
		binary_tree_height(tree->left);
	}
	if (left > right)
		return (left);
	return (right);
}
