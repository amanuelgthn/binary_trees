#include"binary_trees.h"
/**
 * binary_trees_leaves-function that counts the leaves in a binary trees
 * @tree:a ointer to the root node of the tree to count the number of leaves
 * Return: number of leaves of the given node or 0 if the tree is NULL
**/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leave_left = 0, num_leave_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		return (num_leave_left += 1);
	binary_tree_leaves(tree->left);
	if (tree->right == NULL)
		return (num_leave_left += 1);
	binary_tree_leaves(tree->right);
	return (num_leave_left + num_leave_right);
}
