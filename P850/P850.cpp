// P850.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<fstream>

int main()
{
	std::fstream nameFIle; //fstream 클래스 nameFIle을 생성
	std::string input; //string 클래스 input을 생성

	nameFIle.open("mruphy.txt", std::ios::in); //mruphy.txt 읽기 모드로 연다.  
	if (!nameFIle) //파일이 없을 경우
	{ //파일 오픈 에러를 출력하고 종료한다.
		std::cout << "FIle open error!" << std::endl;
		return 0;
	}
	//파일이 있을 경우 
	std::getline(nameFIle, input);
	while(nameFIle)
	{
		std::cout << input << std::endl; //문자열을 출력한다.
		std::getline(nameFIle, input); //파일에 있는 문자열을 input 객체에 담는다.
	}
	nameFIle.close(); //파일을 닫는다.

    return 0;
}

