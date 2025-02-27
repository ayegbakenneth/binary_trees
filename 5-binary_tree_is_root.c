#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a given node is a root.
 * @node: Is a pointer to the node to check.
 *
 * Return: Return 1 if node is a root, otherwise 0
 * If node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
