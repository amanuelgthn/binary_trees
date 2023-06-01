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
	if (node->parent->left == node && node->parent->right == NULL)
		return (NULL);
	else if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);
	else if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);
	return (NULL);
}
/**
*binary_tree_uncle-function that finds the uncle of a given node
*@node:a pointer to the node to find the uncle
*Return:a pointer to the uncle or NULL if node is NULL
*or if node has no uncle
**/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
/**
*binary_trees_ancestor-function that finds the lowest common ancestor of two nodes
*@first: a pointer to the first node
*@second:a pointer to the second node
*Return:a pointer to the lowest common ancestor node of the two given nodes
**/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || first->parent == NULL || second == NULL || second->parent == NULL)
		return (NULL);
	if(first->parent == second)
		return (second);
	if (second->parent == first)
		return (first);
	if(binary_tree__sibling(first) == second)
		return (first->parent);
	binary_trees_ancestor(first->parent, second->parent);
}
	
