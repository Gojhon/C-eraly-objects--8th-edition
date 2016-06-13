// P1119.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"IntBinaryTree.h"

int main()
{
	IntBinaryTree tree;
	std::cout << " Inserting the numbers 5, 8, 3, 12, 9" << std::endl << std::endl;
	tree.insert(5);
	tree.insert(8);
	tree.insert(3);
	tree.insert(12);
	tree.insert(9);

	std::cout << "Inorder traversal : ";
	tree.showInOrder();

	std::cout << std::endl << std::endl << "Preorder traversal: ";
	tree.showPreOrder();
	
	std::cout << std::endl << std::endl << "Postorder traversal : ";
	tree.showPostOrder();
	std::cout<<std::endl;
    return 0;
}

