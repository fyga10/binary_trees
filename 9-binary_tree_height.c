#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the height
 *
 * Return: Height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		l_height = binary_tree_height(tree->left) + 1;
		r_height = binary_tree_height(tree->right) + 1;
	}
	if (l_height >= r_height)
		return (l_height);
	return (r_height);
}
