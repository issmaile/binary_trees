#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * @parent: a ptr to the node to insert the right child in
 * @value: value to store in the new node
 *
 * Return: ptr to created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
		parent->right = n;
	else
	{
		n->right = parent->right;
		parent->right = n;
		n->right->parent = n;
	}

	return (n);
}
