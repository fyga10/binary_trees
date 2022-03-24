#include "binary_trees.h"
/**
 * binary_tree_depth - Measure the tree depth.
 * @tree: pointer to a parent node.
 * Return: the tree height. 0 if tree is null.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		count = 1 + binary_tree_depth(tree->parent);

	return (count);
}
