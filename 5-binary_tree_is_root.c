#include "binary_trees.h"


/**
 * binary_tree_is_root - check if a node is the root of a binary tree
 * @node: a binary tree node
 * Return: 1 if its True, 0 if its False
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
