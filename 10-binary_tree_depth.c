#include"binary_trees.h"
/**
*binary_tree_depth-function that measures the depth of a node in a binary tree
*@tree:a pointer to the node to measure the depth
*Return: depth of the given node or 0 if the tree is NULL
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
