// P1009.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
	std::vector<int>  values;
	std::vector<int>::iterator iter;

	values.push_back(1);
	values.push_back(2);
	values.push_back(2);
	values.push_back(3);
	values.push_back(3);
	values.push_back(3);
	
	std::cout << "The values in the vector are:" << std::endl;
	for (iter = values.begin(); iter != values.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl << std::endl;
	std::cout << "The number  of 1s in the vector is ";
	std::cout << std::count(values.begin(), values.end(), 1)<<std::endl;
	std::cout << "The number  of 2s in the vector is ";
	std::cout << std::count(values.begin(), values.end(), 2) << std::endl;
	std::cout << "The number  of 3s in the vector is ";
	std::cout << std::count(values.begin(), values.end(), 3) << std::endl;

	return 0;
}

