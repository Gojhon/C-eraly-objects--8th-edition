// P530.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cctype>

int main()
{
	char ch;
	int vowelCount = 0;
	std::string sentence;

	std::cout << "Enter any sentence you wish and I will" << std::endl;
	std::cout << "Tell you how many vowels are in it" << std::endl;

	std::getline(std::cin, sentence);

	for (int pos = 0; pos < sentence.length(); pos++)
	{
		ch = toupper(sentence[pos]);

		switch (ch)
		{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':vowelCount++;
		}
	}
	std::cout<<"There are "<<vowelCount<<" vowels in the sentence. \n "; 
	return 0;
}

