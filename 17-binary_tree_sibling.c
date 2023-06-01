#include"binary_trees.h"
/**
*binary_tree_sibling-function that finds the sibiling of a node
*@node:a pointer to the node to find the sibiling
*Return:the sibiling of the node or NULL if node is NULL
*or the parent of the given node is NULL
*or if the node has no sibilings
**/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != node && node->parent->right == NULL)
		return (NULL);
	else if (node->parent->left != node && node-<parent->right != NULL)
		return (node->parent->right)
	else if (node->parent->right != node && node->parent->left == NULL)
		return (NULL);
	else if (node->parent->right != node && node-<parent->left != NULL)
		return (node->parent->left)
	
}
