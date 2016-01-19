// P329.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include<vector>

void first() //first 함수
{
	std::cout << "I am now inside the function first" << std::endl;
}

void second() //second 함수
{
	std::cout << "I am now inside the funcion second" << std::endl;
}

int main()
{

	using DF = void(*)();
	std::vector<DF>datas = { first,second };
	for (auto& item : datas) {
		(*item)();

	}
	//std::cout << "I am starting in function main" << std::endl;
	//first();//first 함수를 호출(실행)한다.
	//second();//second 함수를 호출(실행)한다.
	//std::cout << "Back in function main again." << std::endl;
    return 0;
}

