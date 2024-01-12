#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) 
{
    binary_tree_t *new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new_node == NULL) 
	{
		printf("Failed to create new node.\n");
		return (NULL);
	}

	new_node->value = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
