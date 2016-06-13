// P1101.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<sstream>
#include<string>
#include<stack>


std::string postfixExpr(std::istream & inputStream);

int main()
{

	std::string input;
	std::cout << "Enter a postfix expression to convert to infix," <<
		std::endl << "or a blank line to quit the program : ";
	std::getline(std::cin, input);

	while (input.size() != 0)
	{
		std::istringstream inputExpr(input);
		std::cout << "The infix equivalent is " << postfixExpr(inputExpr) << std::endl;
		std::cout << "Enter a postfix expression to evaluate: ";
		std::getline(std::cin, input);
	}
    return 0;
}

std::string postfixExpr(std::istream  &in)
{
	std::stack<std::string> infixStack;
	char ch;
	int number;
	std::string lExpr, rExpr;

	ch = in.peek();
	while (ch != EOF)
	{
		if (isspace(ch))
		{
			ch = in.get();
			ch = in.peek();
			continue;
		}
		if (isdigit(ch))
		{
			in >> number;
			std::ostringstream numberStr;
			numberStr << number;
			infixStack.push(numberStr.str());
			ch = in.peek();
			continue;
		}
		rExpr = infixStack.top();
		infixStack.pop();
		lExpr = infixStack.top();
		infixStack.pop();
		if (ch == '+' || ch == '-' || + ch == '*' || ch == '/')
			infixStack.push("(" + lExpr + " " + ch + " " + rExpr + ")");
		else
		{
			std::cout << "Error in the input expression " << std::endl;
			exit(1);
		}

		ch = in.get();
		ch = in.peek();
	}

	return infixStack.top();
}