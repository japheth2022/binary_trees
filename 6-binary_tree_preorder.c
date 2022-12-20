#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse the tree in preorder and execute func
 * @tree: pointer to the tree
 * @func: function to execute on data of the node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
