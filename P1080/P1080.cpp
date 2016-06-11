// P1080.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "DynIntStack.h"

int main()
{
	DynIntStack stack;
	int catchVar;

	std::cout << "Pushing 5" << std::endl;
	stack.push(5);
	std::cout << "Pushing 10 " << std::endl;
	stack.push(10);
	std::cout << "Pushing 15 "<< std::endl;
	stack.push(15);

	std::cout << "Poping..." << std::endl;
	stack.pop(catchVar);
	std::cout << catchVar << std::endl;
	stack.pop(catchVar);
	std::cout << catchVar << std::endl;
	stack.pop(catchVar);
	std::cout << catchVar << std::endl;

	std::cout << std::endl << "Attempting to pop again" << std::endl;
	stack.pop(catchVar);
	return 0;
}
		
		