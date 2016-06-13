// P1115.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"IntBinaryTree.h"

int main()
{
	IntBinaryTree tree;
	std::cout << "      numbers.";
	tree.insert(5);
	tree.insert(8);
	tree.insert(3);
	tree.insert(12);
	tree.insert(9);
	std::cout << std::endl;


    return 0;
}

