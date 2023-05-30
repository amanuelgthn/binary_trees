#include"binary_trees.h"
/**
*binary_tree_node-function that creates a binary tree node
*@parent: a pointer to the parent node of the node to be created
*@value: the value to be put in the new node
*Return:return a pointer to the new node or NULL on failure
**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return NULL;
	new->parent = parent;
	new->n = value;
	return (new);
}
