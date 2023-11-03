#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: ptr to the node
 *
 * Return: ptr to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);

}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: ptr to the node to find the uncle
 *
 * Return: ptr to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
