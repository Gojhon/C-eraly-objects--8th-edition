// P875.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<cctype>

int main()
{
	long offset;
	char ch;
	char response;

	std::fstream file("letters.txt", std::ios::in);
	//letters.txt 파일 읽기 모드로 연다.
	if (!file)
	{//파일을 없을경우 Error oepning file 을 출력하고 종료한다.
		std::cout << "Error oepning file.";
		return 0;
	}
	do
	{
		std::cout << "Currently at position "
			<< file.tellg() << std::endl;//tellg함수는 현재의 읽기 위치를 반환합니다.
		std::cout << "Enter an offset from the" <<
			"beginning of the file: ";
		std::cin >> offset; //숫자를 입력 받는다.
		file.seekg(offset, std::ios::beg); //시작 지점에서 읽을 숫자의 위치를 설정
		file.get(ch); //문자를 읽는다.
		std::cout << "Character read:" << ch << std::endl;//문자를 출력한다.
		std::cout << "Do it again? ";
		std::cin >> response; //
	} while (toupper(response) == 'Y'); //y를 입력하면 계속 while을 
	//toupper함수는 소문자를 대문자로 변환한다.
	file.close();
    return 0;
}

