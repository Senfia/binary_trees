#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: parent of node to create
 * @value: value to insert in the binary tree
 * Return: pointer to n_node node or NULL if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));
	if (!n_node)
		return (NULL);

	n_node->n = value;
	n_node->left = NULL;
	n_node->right = NULL;
	n_node->parent = parent;
	return (n_node);
}
