include "binary_trees.h"
/**
  * binary_tree_depth - returns the depth of a binary tree
  * @node: Node to measure the depth from
  * Return: depth of the binary tree
  */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
