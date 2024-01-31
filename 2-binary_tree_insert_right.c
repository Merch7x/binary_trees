#include "binary_trees.h"

/**
* binary_tree_insert_right - creates a binary tree node as a right child
* @parent: pointer to the node to insert the left child in
* @value: value to be put in new node
* Return: pointer to new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	if (parent->right == NULL)
	{
		parent->right = new_node;
	}
	else
	{
		old_node = malloc(sizeof(binary_tree_t));
		if (old_node == NULL)
		{
			return (NULL);
		}

		old_node = parent->right;
		old_node->parent = new_node;
		old_node->left = NULL;
		old_node->right = NULL;

		new_node->right = old_node;
		parent->right = new_node;
	}

return (new_node);
}

