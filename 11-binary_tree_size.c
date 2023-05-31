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

