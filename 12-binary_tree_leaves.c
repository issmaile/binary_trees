#include "binary_trees.h"

/**
 * binary_tree_leaves - number of leaves
 * @tree: ptr to the root node
 *
 * Return: 0 if ptr is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_is_leaf(tree) +
			binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));

}
