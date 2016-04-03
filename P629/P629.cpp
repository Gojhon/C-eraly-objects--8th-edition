// P629.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>

class CodeMaker
{
private:
	int size;
	char codeChar[94];
	int findIt(char[], int, char);

public:
	CodeMaker();
	std::string encode(std::string);
	std::string decode(std::string);

};
CodeMaker::CodeMaker()
{
	size = 94;
	std::ifstream inFile; //파일 읽을 객체를 생성한다.
	inFile.open("code.dat");
	//code.dat파일을 읽는다.
	
	for (int ascii = 32; ascii < 127; ascii++)
		codeChar[ascii - 32] = ascii - 30;
		//inFile >> codeChar[ascii - 32];

	//code.dat파일을 읽는다.
	inFile.close();
	//파일을 닫는다.

}
std::string CodeMaker::encode(std::string s) //부호화를 한다.
{
	int ascii;
	char newChar;
	std::string newString = "";

	for (unsigned pos = 0; pos < s.length(); pos++)
	{
		ascii = s[pos];
		//입력된 문자열을 int형으로 부호화한다.
		newChar = codeChar[ascii - 32];
		//새로운 문자열을 만든다.
		newString += newChar; //문자열을 더한다.
	}
	return newString;
}

std::string CodeMaker::decode(std::string s) //해독한다.
{
	int index;
	char nextchar;
	char originalChar;
	std::string decodedText = "";

	for (unsigned pos = 0; pos < s.length(); pos++)
	{
		nextchar = s[pos]; //부호화된 문자를 nextchar변수에 할당한다.
		index = findIt(codeChar, size, nextchar);

		originalChar = index + 32;
		decodedText += originalChar;

	}
	return decodedText;
}

int CodeMaker::findIt(char A[], int size, char value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (A[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}
int main()
{
	std::string originalText, secretCode, finalText;
	CodeMaker myCoder;

	std::cout << "Enter the message to be encoded" << std::endl;
	std::getline(std::cin, originalText);

	secretCode = myCoder.encode(originalText);
	std::cout << std::endl << "Here is the encoded message" << std::endl << secretCode <<std::endl;
	finalText = myCoder.decode(secretCode);
	std::cout<<std::endl<<"Here is the decoded message"<<std::endl<<finalText<<std::endl;
    return 0;
}

