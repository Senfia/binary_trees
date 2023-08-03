#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: a binary tree node
 * Return: 1 if True, 0 if False
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == 0)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0 If tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree && !(binary_tree_is_leaf(tree)))
	{
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	}
	return (0);
}
