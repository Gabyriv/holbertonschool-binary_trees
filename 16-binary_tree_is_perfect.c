#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
*
* @tree: A pointer to the root node of the tree to check.
*
* Return: 1 if the tree is perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int height = binary_tree_height(tree);

	int nodes = binary_tree_nodes(tree);

	return (nodes == (1 << height) - 1);
}

/**
* binary_tree_height - Calculates the height of a binary tree.
*
* @tree: A pointer to the root node of the tree to calculate the height of.
*
* Return: The height of the tree.
*/
int binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);

	int right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
* binary_tree_nodes - Counts the number of nodes in a binary tree.
*
* @tree: A pointer to the root node of the tree to count the nodes of.
*
* Return: The number of nodes in the tree.
*/
int binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
