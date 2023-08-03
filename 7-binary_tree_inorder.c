#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a tree in a pre-order
 * @tree: root of binary tree
 * @func: function to apply to each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func)
		return;
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
