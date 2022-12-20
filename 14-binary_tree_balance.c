#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - calculates balance factor
 * @tree: pointer to tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int balance = 0;
if (tree)
balance += binary_tree_height(tree->left) - binary_tree_height(tree->right);
return (balance);
}

/**
 * binary_tree_height - finds the height of the tree
 * @tree: the pointer to the tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
int l = 0, r = 0;
l += (tree->left) ? 1 + binary_tree_height(tree->left) : 1;
r += (tree->right) ? 1 + binary_tree_height(tree->right) : 1;
return ((l > r) ? l : r);
}
return (0);
}
