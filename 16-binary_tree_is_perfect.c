#include "binary_trees.h"

/**
 * exponent - exponent helper function
 * @base: base
 * @power: power base will be raised to
 * Return: base
 */
size_t exponent(size_t base, size_t power)
{
	size_t output;

	output = 1;
	while (power > 0)
	{
		output *= base;
		--power;
	}
	return (output);
}
/**
 * binary_tree_height - measure height of a binary tree
 * @tree: root of binary tree
 * Return: maximum number of edges between the root and a leaf node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	if (tree && (tree->left || tree->right))
		count = 1 + MAX(binary_tree_height(tree->left),
				binary_tree_height(tree->right));

	return (count);
}
/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: root of the tree
 * Return: number of nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	if (tree)
		count = 1 + binary_tree_size(tree->left)
			+ binary_tree_size(tree->right);

	return (count);
}
/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: pointer to binary tree node
 * Return: 0, If tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t total, i, j;

	j = binary_tree_height(tree) + 1;
	total = 0;
	for (i = 0; i < j; i++)
		total += exponent(2, i);
	if (total == binary_tree_size(tree))
		return (1);
	return (0);
}
