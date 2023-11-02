#include "binary_trees.h"

/**
 * binary_tree_node - creates a bin tree node
 * @parent: ptr to parent node to create
 * @value: value to put in new node
 *
 * Return: ptr to new node, else NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n = malloc(sizeof(binary_tree_t));

	if (n = NULL)
		return (NULL);
	n->n = value;
	n->parent = parent;
	n->left = NULL;
	n->right = NULL;

	return (n);
}
