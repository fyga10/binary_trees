#include "binary_trees.h"
/**
 * binary_tree_is_root - Check if the node is a root.
 * @node: node to be check.
 * Return: 1 if is a root, 0 if not.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (!node)
	return (0);

	if (!(node->parent))
		return (1);

	return (0);
}
