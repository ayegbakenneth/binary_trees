#include "binary_trees.h"

/**
 * binary_tree_delete - A function that deletes an entire binary tree.
 * @tree: Is a pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
