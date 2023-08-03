#include "binary_trees.h"
/**
 * child_count - returns 1 or 0
 * @tree: pointer to binary tree node
 * Return: 0 or 1
 */
int child_count(const binary_tree_t *tree)
{
	int count;

	count = 0;
	if (tree)
	{
		if (tree->left)
			++count;
		if (tree->right)
			++count;
	}
	return (count);
}
/**
 * binary_tree_check - checks if tree is full of nodes
 * @tree: root of the binary tree
 * @func: function to apply to each node of the tree
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_check(const binary_tree_t *tree,
			  int (*func)(const binary_tree_t *node))
{
	int k;

	if (tree)
	{
		k = func(tree);
		if (k == 0)
			return (1);
		if (k== 1)
			return (0);
		return (binary_tree_check(tree->left, func) &&
			binary_tree_check(tree->right, func));
	}
	return (0);
}
/**
 * binary_tree_is_full- checks if a binary tree is full
 * @tree: pointer to node
 * Return: If tree is NULL, 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	return (binary_tree_check(tree, child_count));
}
