#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the height
 *
 * Return: Height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_s = 0, rigth_s = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_s = binary_tree_height(tree->left);
	rigth_s = binary_tree_height(tree->right);
	if (left_s > rigth_s)
		return (left_s + 1);
	return (rigth_s + 1);
}
