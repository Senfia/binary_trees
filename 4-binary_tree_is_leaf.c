#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf of a binary tree
 * @node: a binary tree node
 * Return: 1 if True, 0 if False
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
