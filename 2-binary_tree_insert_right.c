#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent of node to insert
 * @value: value to insert on right of parent
 * Return: pointer to the n_nodely inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (!parent)
		return (NULL);
	n_node = binary_tree_node(parent, value);
	if (!n_node)
		return (NULL);

	if (parent->right)
	{
		n_node->right = parent->right;
		(n_node->right)->parent = n_node;
	}
	parent->right = n_node;

	return (n_node);
}
