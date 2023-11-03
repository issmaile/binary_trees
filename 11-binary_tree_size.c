#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: ptr to the root node
 *
 * Return: if tree is NULL, must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		size_t n_left, n_right;

		n_left = binary_tree_size(tree->left);
		n_right = binary_tree_size(tree->right);
		return (1 + n_left + n_right);
	}
}
