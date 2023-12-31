#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is leaf
 * @node: ptr to node to check
 *
 * Return: ret 1 if leaf, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

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
