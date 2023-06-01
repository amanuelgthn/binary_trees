#include"binary_trees.h"
/**
 * binary_tree_nodes-function that counts the leaves in a binary trees
 * @tree:a ointer to the root node of the tree to count the number of nodes
 * Return: number of nodes of the given node or 0 if the tree is NULL
**/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (2);
	if (tree->left != NULL || tree->right != NULL)
		return (1);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
