#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: a binary tree node
 * Return: 0 If tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count = 0;

	if (node)
	{
		for (; node->parent; node = node->parent)
		{
		++count;
		}
	}
	return (count);
}

