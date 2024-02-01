#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire binary tree
 * @tree: a pointer to the root of the tree to delete
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* if tree is null, do nothing */
	if (tree == NULL)
		return;

	/* recursively deleting the sub trees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
