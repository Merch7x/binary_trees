#include "binary_trees.h"

/**
* binary_tree_insert_right - creates a binary tree node as a right child
* @parent: pointer to the node to insert the left child in
* @value: value to be put in new node
* Return: pointer to new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	parent->right = new_node;

return (new_node);
}

