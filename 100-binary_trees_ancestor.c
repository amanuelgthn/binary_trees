#include"binary_trees.h"
/**
*binary_trees_ancestor-function
*that finds the lowest common ancestor of two nodes
*@first: a pointer to the first node
*@second:a pointer to the second node
*Return:a pointer to the lowest common ancestor node of the two given nodes
**/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *parent_first, *parent_second;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)(first));
	parent_first = first->parent, parent_second = second->parent;
	if (parent_first == parent_second)
		return (parent_first);
	if (first == parent_second || parent_first == NULL ||
	 (parent_first->parent == NULL && parent_second))
		return (binary_trees_ancestor(first, parent_second));
	else if (second == parent_first || parent_second == NULL ||
	(parent_second->parent == NULL && parent_first))
		return (binary_trees_ancestor(parent_first, second));
	return (binary_trees_ancestor(parent_first, parent_second));
}
