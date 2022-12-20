#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire binary tree
 * @tree: the pointer to the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
binary_tree_delete(tree->right);
binary_tree_delete(tree->left);
free(tree);
}
}
