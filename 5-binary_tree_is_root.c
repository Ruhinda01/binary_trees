#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the given node is a root
 * @node: pointer to the node to check
 *
 * Return: 0 if node is NULL, 1 if root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
