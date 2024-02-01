#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Function for the current node */
	func(tree->n);
}
