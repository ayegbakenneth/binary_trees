#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks if a node is a leaf.
 * @node:  Is a pointer to the node to check.
 * Return: Return 1 if node is a leaf, otherwise 0
 * If node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
