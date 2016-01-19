// P290.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
int main()
{
	std::ofstream outputfile;
	outputfile.open("demofile.txt");

	std::cout << "Now Writing data to the file" << std::endl;

	outputfile << "Bach" << std::endl;
	outputfile << "Beethoven" << std::endl;
	outputfile << "Mozart" << std::endl;
	outputfile << "Schubert" << std::endl;

	outputfile.close();

	std::cout << "done" <<std::endl<<std::endl;
    return 0;
}

