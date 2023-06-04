#include"binary_trees.h"
/**
*binary_tree_is_bst-function that checks if
*a binary tree is a valide Binary Search Tree
*@tree:a pointer to the root node of the tree to check if it's BST
*Return: 1 if tree is a valid BST or 0 if not or if it is NULL
**/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		if (tree->left->n >= tree->n)
			return (0);
		if (tree->right)
		{
			if (tree->left->n >= tree->right->n)
				return (0);
		}
	}
	binary_tree_is_bst(tree->left);
	binary_tree_is_bst(tree->right);
	return (1);
}
