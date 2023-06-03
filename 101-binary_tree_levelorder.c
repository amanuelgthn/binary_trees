#include"binary_trees.h"
/**
 *binary_tree_levelorder-function that goes through
 *a binary tree using level-order traversal
 *@tree: a pointer to the root of the node of the tree to traverse
 *@func: a pointer to the function to call for each node
 *Do nothing if either tree or func is NULL
 **/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	if (tree->left)
		binary_tree_levelorder(tree->left, func);
	if (tree->right)
		binary_tree_levelorder(tree->right, func);
}
