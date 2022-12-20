#include "binary_trees.h"

/**
 * binary_tree_inorder - inorder traversal of binary tree
 * @tree: the pointer to the tree
 * @func: the func to execute on node data
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
}
