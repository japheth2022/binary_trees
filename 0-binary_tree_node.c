#include "binary_trees.h"

/**
 * binary_tree_node - creates node on binary tree
 * @parent: pointer to root node of binary tree
 * @value: data to store in the new node
 * Return: returns pointer to new node or null if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node;
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
return (node);
}
