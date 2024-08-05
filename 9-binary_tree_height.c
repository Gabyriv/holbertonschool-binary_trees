#include "binary_trees.h"
/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: A pointer to the root node of the tree to measure the height of.
*
* Return: The height of the tree if it is not NULL, 0 otherwise.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	size_t left_height = binary_tree_height(tree->left);

	size_t right_height = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	return (0);

	return (left_height > right_height ? left_height + 1 : right_height + 1);


}
