#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a node at the left of the parent.
 * @parent: parent node.
 * @value: node data.
 * Return: the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

if (!parent)
return (NULL);
new_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
