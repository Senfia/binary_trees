#include "binary_trees.h"

/**
* binary_tree_insert_left - insert a node as the left child
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
* Return: pointer to new node or null
**/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (!parent)
		return (NULL);
	n_node = binary_tree_node(parent, value);
	if (!n_node)
		return (NULL);

	if (parent->left)
	{
		n_node->left = parent->left;
		(n_node->left)->parent = n_node;
	}
	parent->left = n_node;
	return (n_node);
}
