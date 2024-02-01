#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree
 * Return: height
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height, right_height, height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);
	height = (left_height + right_height) + 1;
	return (height);
}

