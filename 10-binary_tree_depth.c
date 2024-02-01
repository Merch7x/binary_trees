#include "binary_trees.h"

/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: pointer to root node of tree
 * Return: height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}


