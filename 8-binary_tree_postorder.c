#include"binary_trees.h"
/**
*binary_tree_postorder-a a function that goes through a binary tree using post-order traversal
*@tree:a pointer to the root node of the tree to be traversed
*@func: a pointer to a function to call for each node
*the value in the node must be passed as a parameter to this function
*Do nothin if the ree or func is NULL
**/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
	func(tree->n);
}
