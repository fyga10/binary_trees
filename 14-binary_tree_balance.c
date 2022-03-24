#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: Height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_side = 0, r_side = 0;

	if (tree == NULL)
		return (0);
	l_side = binary_tree_height(tree->left);
	r_side = binary_tree_height(tree->right);
	if (l_side > r_side)
		return (l_side + 1);
	return (r_side + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * balanceFactor = height(leftSubTree) − height(rightSubTree)
 *
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves (0, 1 or 2)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int BalanceFactor = 0;
	int heightLeft = 0, heightRight = 0;

	if (tree == NULL)
		return (0);

	heightLeft = (int)binary_tree_height_altered(tree->left);
	heightRight = (int)binary_tree_height_altered(tree->right);
	BalanceFactor = heightLeft - heightRight;

	return (BalanceFactor);
}
