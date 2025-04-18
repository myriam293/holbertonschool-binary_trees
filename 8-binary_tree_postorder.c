#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - A function that goes
 * through a binary tree using post-order traversal.
 *
 * @tree: const pointer to root node to begin traversal at
 * @func: function to call on tree node's data
 *
 * Return: Nothing.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
