#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a node in a binary tree
 * @tree: Is a pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
