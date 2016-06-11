// P1082.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<stack>

int main()
{
	std::stack<int, std::vector<int>>iStack;

	for (int x = 2; x < 8; x += 2)
	{
		std::cout << "Pushing " << x << std::endl;
		iStack.push(x);
	}

	std::cout << "The size of the stack is ";
	std::cout << iStack.size() << std::endl;

	while (!iStack.empty())
	{
		std::cout << "Popping " << iStack.top() << std::endl;
		iStack.pop();
	}
    return 0;
}

