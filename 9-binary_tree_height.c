#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the binary tree
 * @tree: a ponter to the root node of the tree to measure the height
 *
 * Return: 0 or return the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		r = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	}
	return ((l > r) ? l : r);
}
