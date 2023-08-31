#include "binary_trees.h"

/**
 * is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: if tree is NULL : 0, full return 1, otherwise 0
 */

bool is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (true);
	if (tree->left == NULL && tree->right == NULL)
		return (true);
	if (tree->left && tree->right)
		return (is_full(tree->left) && is_full(tree->right));
	return (false);
}
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: if tree is NULL : 0, full return 1, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full(tree) ? 1 : 0);
}

