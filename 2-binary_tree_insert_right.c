#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node on the right side of tree
 * @parent: the parent of node
 * @value: data it will be carrying
 * Return: the pointer to the newly created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (parent == NULL)
return (NULL);
node = binary_tree_node(parent, value);
if (node == NULL)

return (NULL);

if (parent->right != NULL)
{
node->right = parent->right;
parent->right->parent = node;
}
parent->right = node;
return (node);
}
