#include"binary_trees.h"
/**
*binary_tree_insert_left-function that inserts a node as the left-child of another node
*@parent:a pointer to the node to insert the left-child in
*@value:the value to store in the new node
*Return:a pointer to the created node, or NULL on failure or if parent is NULL
**/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if(parent->left == NULL)
		parent->left = new;
	else
	{
		new->left = parent->left;
		parent->left = NULL;
		parent->left = new;
	}
	return (new);
}
