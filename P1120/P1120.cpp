// P1120.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "IntBinaryTree.h"

int main()
{
	IntBinaryTree tree;
	std::cout << "Inserting the numbes 5, 8, 3, 12, 9" << std::endl;
	tree.insert(5);
	tree.insert(8);
	tree.insert(3);
	tree.insert(12);
	tree.insert(9);

	if (tree.search(3))
		std::cout << "3 is found in the tree." << std::endl;
	else
		std::cout << "3 was not found in the tree." << std::endl;

    return 0;
}

