#include "binary_trees.h"

/**
 * binary_tree_delete - dels an entire bin tree
 * @tree: ptr to root node of tree to del
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
