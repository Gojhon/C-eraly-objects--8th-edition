#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

void IntBinaryTree::insert(TreeNode * &tree, int num)
{
	if (!tree)
	{
		tree = new TreeNode(num);
		return;
	}
	if (tree->value == num)
		return;

	if (num < tree->value)
		insert(tree->left, num);
	else
		insert(tree->right, num);
}

void IntBinaryTree::destroySubtree(TreeNode *tree)
{
	if (!tree) return;
	destroySubtree(tree->left);
	destroySubtree(tree->right);
	delete tree;
}

bool IntBinaryTree::search(int num) const
{
	TreeNode *tree = root;
	while (tree)
	{
		if (tree->value == num)
			return true;
		else if (num < tree->value)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return false;
}

void IntBinaryTree::remove(TreeNode *&tree, int num)
{
	if (tree == NULL) return;
	if (num < tree->value)
		remove(tree->left, num);
	else if (num > tree->value)
		remove(tree->right, num);
	else
		makeDeletion(tree);
}

void IntBinaryTree::makeDeletion(TreeNode *&tree)
{
	TreeNode *nodeToDelete = tree;

	TreeNode *attachPoint;
	if (tree->right == NULL)
	{
		tree = tree->left;
	}
	else if (tree->left == NULL)
	{
		tree = tree->right;
	}
	else
	{
		attachPoint = tree->right;
		while (attachPoint->left != NULL)
			attachPoint = attachPoint->left;
		attachPoint->left = tree->left;
		tree = tree->right;
	}
	delete nodeToDelete;
}
void IntBinaryTree::displayInOrder(TreeNode *tree) const
{
	if (tree)
	{
		displayInOrder(tree->left);
		cout << tree->value << " ";
		displayInOrder(tree->right);
	}
}
void IntBinaryTree::displayPreOrder(TreeNode *tree) const
{
	if (tree)
	{
		cout << tree->value << " ";
		displayPreOrder(tree->left);
		displayPreOrder(tree->right);
	}
}
void IntBinaryTree::displayPostOrder(TreeNode *tree) const
{
	if (tree)
	{
		displayPostOrder(tree->left);
		displayPostOrder(tree->right);
		cout << tree->value << " ";
	}
}
