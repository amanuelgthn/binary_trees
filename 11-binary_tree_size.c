#include"binary_trees.h"
/**
*binary_tree_size-function that measures the size of a binary tree
*@tree:a pointer to the root node of the ree to measure the size
*Return:the size of the binary_tree or 0 if the tree is NULL
**/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = binary_tree_size_recur(tree, 1);
	return (size);
}
/**
 * binary_tree_size_recur-function that measures the size of binary tree recursively
 * @tree:a pointer to the root node of the tree to measure the size
 * @size:size of the tree to be measured
 * Return:the size of the binary tree
*/
size_t binary_tree_size_recur(const binary_tree_t *tree, size_t size)
{
	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		size = size + 1;
		binary_tree_size_recur(tree->left, size);
	}
	if (tree->right)
	{
		size = size + 1;
		binary_tree_size_recur(tree->right, size);
	}
	return (size);
}
