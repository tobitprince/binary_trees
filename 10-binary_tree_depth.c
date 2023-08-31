#include "binary_trees.h"

/**
 * binary_tree_depth - function that returns the height of a tree
 * @tree: pointer to the root node of the tree
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
