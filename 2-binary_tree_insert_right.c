#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node
 * as the right-child of another node
 * @parent: Is a pointer to the node to insert the right-child in
 * @value: Is the value to store in the new node
 * Return: If parent is NULL or an error occur
 * Description: If parent already has a right-child, the new node
 * takes its place and the old right-child is set as
 * the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	if (parent == NULL)
		return (NULL);

	root = binary_tree_node(parent, value);
	if (root == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		root->right = parent->right;
		parent->right->parent = root;
	}
	parent->right = root;

	return (root);
}
