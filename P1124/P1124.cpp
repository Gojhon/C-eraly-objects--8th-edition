// P1124.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include"IntBinaryTree.h"

int main()
{
	IntBinaryTree tree;
	std::cout << "Inserting the numbers 5, 8, 3, 12, 9.";
	tree.insert(5);
	tree.insert(8);
	tree.insert(3);
	tree.insert(12);
	tree.insert(9);

	std::cout << std::endl << "Here are the values in the tree: " << std::endl;
	tree.showInOrder();

	std::cout << std::endl << "Deleting 8..." << std::endl;
	tree.remove(8);
	std::cout << "Deleting 12..." << std::endl;
	tree.remove(12);

	std::cout << "Now, Here are the nodes " << std::endl;
	tree.showInOrder();

	return 0;
}

