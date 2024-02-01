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
		return (0);

	/* recursively calculate the height of left and right */
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}