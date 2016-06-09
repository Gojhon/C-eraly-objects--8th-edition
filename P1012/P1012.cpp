// P1012.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>

void doubleValue(int &);

int main()
{
	std::vector<int> numbers;  //int형 vector numbers를 생성
	std::vector<int>::iterator iter; //iterator(반복자) 생성

	for (int x = 0; x < 10; x++)
	{
		numbers.push_back(x); //numbers에 0 ~ 9 까지의 값을 넣는다.
	}

	std::cout << " The numbers in the Vector are : " << std::endl;
	for (iter = numbers.begin(); iter != numbers.end(); iter++) 
		/*
		반복자iter에 numbers에 시작값을 넣고 iter값이 numbers의 
		마지막값과 동일하기 전까지 반복문을 이 돌아간다.
		*/
		std::cout << *iter << " "; //0 부터 9 까지의 값을 출력한다.
	std::cout << std::endl;
	//for이 종료 되면 한칸을 띈다.


	std::for_each(numbers.begin(), numbers.end(), doubleValue);
	//for_each(시작함수,종료함수,처리함수)
	//numbers값에 doubleValue(int &val)함수를 호출
	//numbers 값에 *2를 한다.
	std::cout << "Not the numbers in the vector are : " << std::endl;
	
	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		std::cout << *iter << " ";//값을 출력한다.
	std::cout << std::endl;
    return 0;
}

void doubleValue(int &val) //numbers 값을 *2한다.
{
	val *= 2;

}

