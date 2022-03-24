#include "binary_trees.h"
/**
 * binary_tree_preorder - Go through a binary tree in pre-order mode.
 * @tree: pointer to the root.
 * @func: pointer to a print function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!(tree) || !(func))
	return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
