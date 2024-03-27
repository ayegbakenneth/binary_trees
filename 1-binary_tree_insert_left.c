#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	if (parent == NULL)
		return (NULL);

	root = binary_tree_node(parent, value);
	if (root == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		root->left = parent->left;
		parent->left->parent = root;
	}
	parent->left = root;

	return (root);
}
