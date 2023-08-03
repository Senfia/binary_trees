#include "binary_trees.h"

/**
 * binary_tree_h - measure the height of a binary tree
 * @tree: root of binary tree
 * Return: heighest number of edges on left or right
 */
int binary_tree_h(const binary_tree_t *tree)
{
	int count;

	count = -1;
	if (tree)
		count = 1 + MAX(binary_tree_h(tree->left),
				binary_tree_h(tree->right));
	return (count);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to root of tree
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == 0)
		return (0);
	return (binary_tree_h(tree->left) -
		binary_tree_h(tree->right));

}
