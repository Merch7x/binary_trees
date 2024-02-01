#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a bt
 * @tree: pointer to root of tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
        right_height = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (left_height - right_height);
}
