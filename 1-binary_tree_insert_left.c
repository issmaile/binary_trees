#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child
 *@parent: a ptr to the node to insert the left child in
 *@value: value to store in the new node

 * Return: ptr to created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n = NULL;

	if (parent == NULL)
		return (NULL);
	n = malloc(sizeof(binary_tree_t));
	if (n == NULL)
		return (NULL);
	n->n = value;
	n->parent = parent;
	n->left = NULL;
	n->right = NULL;

	if (parent->left == NULL)
		parent->left = n;
	else
	{
		n->left = parent->left;
		parent->left = n;
		n->left->parent = n;
	}

	return (n);
}
