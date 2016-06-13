#pragma once
#include<iostream>
class IntBinaryTree
{
private:
	class TreeNode
	{
		friend class IntBinaryTree;
		int value;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int value1, TreeNode *left1 = NULL, TreeNode *rigth1 = NULL)
		{
			value = value1;
			left = left1;
			right = rigth1;
		}
	};

	TreeNode *root;

	void insert(TreeNode *&, int);
	void destroySubtree(TreeNode *);
	void remove(TreeNode *&, int);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *)const;
	void displayPreOrder(TreeNode *)const;
	void displayPostOrder(TreeNode *)const;

public:
	IntBinaryTree()
	{
		root = NULL;
	}
	~IntBinaryTree()
	{
		destroySubtree(root);
	}
	void insert(int num)
	{
		insert(root, num);
	}

	bool search(int)const;
	void remove(int num)
	{
		remove(root, num);
	}

	void showInOrder(void)const
	{
		displayInOrder(root);
	}
	void showPreOrder()const
	{
		displayPreOrder(root);
	}
	void showPostOrder()const
	{
		displayPostOrder(root);
	}
};