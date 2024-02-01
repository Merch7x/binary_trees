#include "binary_trees.h"

/**
* binary_tree_balance - measure the balance factor of a bt
* @tree: pointer to root of tree
* Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{

if (tree == NULL)
	return (0);

return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


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

size_t left_height, right_height, height;

if (tree == NULL)
return (0);

left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
height = max(left_height, right_height);
return (height);
}
