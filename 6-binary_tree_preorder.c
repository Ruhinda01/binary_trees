#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* call function for current node */
	func(tree->n);

	/* traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
