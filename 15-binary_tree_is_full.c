#include "binary_trees.h"

/**
 * is_full_recursive - Function that checks if a binary
 * tree is full recursively
 * @tree: Is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - A function that
 * Checks if a binary tree is full.
 * @tree: root node of the tree to check.
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
