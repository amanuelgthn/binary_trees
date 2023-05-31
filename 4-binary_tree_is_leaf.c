#include"binary_trees.h"
/**
*binary_tree_is_leaf-function that checks if a node is a leaf
*@node:a pointer to the node to check
*Return:1 if node is a leaf or 0 if node is NULL or not leaf
**/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int ret = 1;

	if (node->left != NULL)
		ret = 0;
	if (node->right != NULL)
		ret = 0;
	return (ret);
}
