// P293.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>

int main()
{
	std::ifstream inputfile;
	std::string name;
	inputfile.open("Friends.txt");
	/*if(!inputfilw){
	std::cout<<"파일이 없습니다."<<std::endl;
	}
	*/

	std::cout << "READING DATA FROM THE FILE" << std::endl;
	
	//std::stringstream ss;
	//ss<<inputFIle.rdbuf();
	//std::cout<<std.str();

	//std::getlne(inputfile,name);
	//std::getline(ss,name);
	//inputfile.eof();

	inputfile >> name;
	std::cout << name << std::endl;

	inputfile >>name;
	std::cout << name << std::endl;

	inputfile >> name;
	std::cout << name << std::endl;

	inputfile.close();

	return 0;
}

