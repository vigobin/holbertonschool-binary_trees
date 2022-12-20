#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in a binary tree.
 * @tree: pointer to  root node of the tree to count the number of nodes.
 * Return: 0 if tree is null.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1);

	if (tree->left)
		return (binary_tree_nodes(tree->left) + 1);
	else if (tree->right)
		return (binary_tree_nodes(tree->right) + 1);

	return (0);
}
