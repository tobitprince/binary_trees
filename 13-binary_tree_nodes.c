#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	nodes += (tree->left || tree->right) ? 1 : 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
