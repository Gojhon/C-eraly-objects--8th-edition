// P293.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
	std::cout<<"������ �����ϴ�."<<std::endl;
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

