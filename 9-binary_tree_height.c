#include "binary_trees.h"


/**
 * max - returns the maximum of two values
 * @x: a defined size
 * @y: a defiend size
 * Return: the maximum of the two
 */
size_t max(size_t x, size_t y)
{
	return ((x > y) ? x : y);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (max(left_height, right_height) + 1);
}

