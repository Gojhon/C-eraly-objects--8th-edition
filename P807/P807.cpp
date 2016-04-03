// P807.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<sstream>
#include<iostream>
#include<string>

int main()
{
	std::string str = "Jhon 20 50";
	const char *cstr = "Amy 30 42";
	std::istringstream istr1(str);
	std::istringstream istr2;

	std::ostringstream ostr;

	std::string name;
	int score1, score2, average_score;
	istr1 >> name >> score1 >> score2;
	average_score = (score1 + score2) / 2;
	ostr << name << " has avrage score " << average_score << std::endl;

	istr2.str(cstr);
	istr2 >> name >> score1 >> score2;
	average_score = (score1 + score2) / 2;
	ostr << std::hex;
	ostr << name << " has average score " << average_score << std::endl;
	
	ostr << name << "'s<<scores in haxadecimal are: " << score1 <<" and "<< score2 << std::endl;
	std::cout << ostr.str();

	return 0;
}

