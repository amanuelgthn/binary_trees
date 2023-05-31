#include"binary_trees.h"
/**
 * binary_trees_leaves-function that counts the leaves in a binary trees
 * @tree:a ointer to the root node of the tree to count the number of leaves
 * Return: number of leaves of the given node or 0 if the tree is NULL
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leave = 0;

	if(tree->left)
		num_leave += 1;
	if(tree->right)
		num_leave += 1;
	return (num_leave);
}
