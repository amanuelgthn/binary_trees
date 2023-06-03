#include "binary_trees.h"
/**
 *binary_tree_height-functioin that measures the height of a binary tree
 *@tree:a pointer to the root node of the tree to measure the height
 *Return:the height of the binary tree or 0 if tree is NULL
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}
void binary_tree_print_level_order(const binary_tree_t *node,
int level)
{
	if (node == NULL)
		return;
	if (level == 1)
		printf("%d\n", node->n);
	else if (level > 1)
	{
		binary_tree_print_level_order(node->left, level - 1);
		binary_tree_print_level_order(node->right, level - 1);
	}
}
/**
 *binary_tree_levelorder-function that goes through
 *a binary tree using level-order traversal
 *@tree: a pointer to the root of the node of the tree to traverse
 *@func: a pointer to the function to call for each node
 *Do nothing if either tree or func is NULL
 **/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	int height = binary_tree_height(tree) + 1, i;

	for (i = 1; i <= height; i++)
		binary_tree_print_level_order(tree, i);
}
