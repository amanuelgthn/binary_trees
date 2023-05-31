#include"binary_trees.h"
/**
*binary_tree_is_root-function that checks whether a node is root or not
*@node:the node to be checked if it is root or not
*Return:returns 1 if the node is root or 0 if not or the node is null
**/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
