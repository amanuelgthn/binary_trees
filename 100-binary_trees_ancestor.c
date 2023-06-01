#include"binary_trees.h"
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
	
