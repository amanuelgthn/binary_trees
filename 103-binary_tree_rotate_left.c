#include"binary_trees.h"
/**
*binary_tree_node-function that creates a binary tree node
*@parent: a pointer to the parent node of the node to be created
*@value: the value to be put in the new node
*Return:return a pointer to the new node or NULL on failure
**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
/**
*binary_tree_rotate_left-function that performs
*a left-rotation on a binary tree
*@tree:a pointer to the root node of the tree to rotate
*Return:a pointer to the new root node of the tree once rotated
**/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new;

	if (tree == NULL)
		return (NULL);
	new = binary_tree_node(NULL, tree->right->n);
	new->right = tree->right->right;
	new->left = binary_tree_node(new, tree->n);
	new->left->right = tree->right->left;
	new->left->left = tree->left;
	return (new);
}
