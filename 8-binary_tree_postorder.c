#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses the tree in postorder
 * @tree: pointer to the tree
 * @func: function to execute on node data
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))

{
if (tree && func)
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
