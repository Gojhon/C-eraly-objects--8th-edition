// P330.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
[[noreturn]] void test()
{
	std::exit(0);
}
void deeper()
{
	std::cout << "I am now inside the function deeper" << std::endl;
}

void deep()
{
	std::cout << "I am now inside the function deep." << std::endl;
	deeper();
	std::cout << "Now I am backin deep" << std::endl;
}
int main()
{
	test();
	std::cout << "I am starting in function main" <<std::endl;
	deep();
	std::cout << "Back in Function main again" << std::endl;
    return 0;
}

