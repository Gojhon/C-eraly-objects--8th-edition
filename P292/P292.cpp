// P292.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <fstream> //파일을 읽고 쓰기 위해서 fstream 
#include <string>

int main()
{
	std::ofstream outputFile;
	// 파일로부터 읽어들이거나 쓰기 위해 사용되는 특수한 객체를 ofstream객체라 한다.
	// ofstream 객체는 iostream 객체로부터 파생되었다.
	
	outputFile.open("Friends.txt"); //Friends.txt 파일을 열어서 쓰거나 파일이 없으면 생성한다.
	//outputFile.open("Friends.txt", std::ios_base::app);  //Friends.txt 파일을 열어서 내용을 추가한다.
	
	std::string name1, name2, name3; //문자열 담을 수 있는 변수 선언
	std::cout << "Enter the names of three Friends" << std::endl;
	std::cout << "Friend #1 ";
	std::cin >> name1;  //String 변수 name1에 문자열 저장한다.
	std::cout << "Friend #2 ";
	std::cin >> name2;  //String 변수 name2에 문자열 저장한다.
	std::cout << "Friend #3 ";
	std::cin >> name3;  //String 변수 name3에 문자열 저장한다.

	outputFile << name1 << std::endl; // 텍스트 파일에 name1에 있는 내용을 입력한 후 개행(Enter)한다.
	outputFile << name2 << std::endl; // 텍스트 파일에 name2에 있는 내용을 입력한 후 개행(Enter)한다.
	outputFile << name3 << std::endl; // 텍스트 파일에 name3에 있는 내용을 입력한 후 개행(Enter)한다.

	outputFile.close(); //파일 스트림을 닫는다
	//프로그램이 떠 있는 동안 파일이 lock되기 때문에 파일을 지우려고 한다든가, 
	//다른 사람이 파일을 못 열 수 있습니다. 다 썼으면 close합시다.
	std::cout << "The names were saved to a file " << std::endl;

    return 0;
}

