#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of the tree
 * @tree: the pointer to the tree
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)

{
int size = 0;
if (tree)
{
size += 1;
size += binary_tree_size(tree->left);
size += binary_tree_size(tree->right);
}
return (size);
}
